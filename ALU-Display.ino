int EstadoA = 0;
int EstadoB = 0;

int w = 0;
int x = 0;
int y = 0;
int z = 0;

void setup() {
  // Pines de entrada para A, B, w, x, y, z
  pinMode(2, INPUT); 
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(6, INPUT);
  pinMode(7, INPUT);
  // Pines de salida para cada led del display
  pinMode(13, OUTPUT); // A
  pinMode(12, OUTPUT); // B
  pinMode(11, OUTPUT); // C
  pinMode(10, OUTPUT); // D
  pinMode(9, OUTPUT);  // E
  pinMode(8, OUTPUT);  // F
  pinMode(14, OUTPUT); // G
}

void loop() {
  EstadoA = digitalRead(2); // Leer valor de A
  EstadoB = digitalRead(3); // Leer valor de B
  w = digitalRead(4);
  x = digitalRead(5);
  y = digitalRead(6);
  z = digitalRead(7);

  // Reiniciar LEDs
  resetLEDs();

  // SUMA
  if (!z && !y && !x && w) {
    if (!EstadoA && !EstadoB) {
      CERO();
    } else if (EstadoA ^ EstadoB) {
      UNO(); // SALIDA DE SUMA
    } else if (EstadoA && EstadoB) {
      DOS(); // SALIDA DEL ACARREO
    }
  }
  // RESTA
  else if (!z && !y && x && !w) {
    if (EstadoA ^ EstadoB) {
      UNO(); // SALIDA DE RESTA
      if (!EstadoA && EstadoB) {
      UNONEG(); // SALIDA DEL SIGNO NEGATIVO
      }
    }else {
      CERO();
    }
  }
  // MULTIPLICACION
  else if (!z && !y && x && w) {
    if (EstadoA && EstadoB) {
      UNO(); // SALIDA DE LA MULTIPLICACIÓN
    } else {
      CERO();
    }
  }
  // DIVISION
  else if (!z && y && !x && !w) {
    if (EstadoA && EstadoB) {
      UNO(); // SALIDA DE LA DIVISIÓN
    } else if (!EstadoA && !EstadoB) {
      INDEFINIDO(); // SALIDA DEL INDEFINIDO
    } else if (EstadoA && !EstadoB) {
      INFINITO(); // SALIDA DEL INFINITO
    } else {
      CERO();
    }
  }
  // COMPUERTAS LÓGICAS
  // AND
  else if ((EstadoA && EstadoB) && (!z && y && !x && w)) {
    UNO(); // SALIDA DE AND
  } 
  // OR
  else if ((EstadoA || EstadoB) && (!z && y && x && !w)) {
    UNO(); // SALIDA DE OR
  } 
  // NOT (solo A)
  else if (!z && y && x && w) {
    if (!EstadoA) {
      UNO(); // NOT A
    } else {
      CERO(); // Apagar si se presiona A
    }
  }
  // XOR
  else if ((EstadoA ^ EstadoB) && (z && !y && !x && !w)) {
    UNO(); // SALIDA DE XOR
  }
  // XNOR
  else if (!(EstadoA ^ EstadoB) && (z && !y && !x && w)) {
    digitalWrite(13, HIGH); // SALIDA DE XNOR
  }
  // NAND
  else if (!(EstadoA && EstadoB) && (z && !y && x && !w)) {
    digitalWrite(13, HIGH); // SALIDA DE NAND
  }
  // NOR
  else if (!(EstadoA || EstadoB) && (z && !y && x && w)) {
    digitalWrite(13, HIGH); // SALIDA DE NOR
  }
}

void resetLEDs() {
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
  digitalWrite(14, LOW);
}

void UNONEG() {
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(14, HIGH);
}

void CERO() {
  digitalWrite(13, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(8, HIGH);
}

void UNO() {
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
}

void DOS() {
  digitalWrite(13, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(14, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
}

void INDEFINIDO() {
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(8, HIGH);
}

void INFINITO() {
  digitalWrite(13, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(14, HIGH);
}
