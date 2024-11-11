 
  int w = 0;
  int x = 0;
  int y = 0;
  int z = 0;

void setup() {
  //Pines de entrada para w, x, y, z
  pinMode(2, INPUT); 
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);

  //Pines de salida para cada operación
  pinMode(13, OUTPUT);//A
  pinMode(12, OUTPUT);//B
  pinMode(11, OUTPUT);//C
  pinMode(10, OUTPUT);//D
  pinMode(9, OUTPUT);//E
  pinMode(8, OUTPUT);//F
  pinMode(7, OUTPUT);//G
}

void loop() {

  w = digitalRead(2);
  x = digitalRead(3);
  y = digitalRead(4);
  z = digitalRead(5);


  if (!z && !y && !x && !w) {
    CERO();
  }

  if (!z && !y && !x && w) {
    UNO();
  }

  if (!z && !y && x && !w) {
    DOS();
  }

  if (!z && !y && x && w) {
    TRES();
  }

  if (!z && y && !x && !w) {
    CUATRO();
  }
  
  if (!z && y && !x && w) {
    CINCO();
  }

  if (!z && y && x && !w) {
    SEIS();
  }

  if (!z && y && x && w) {
    SIETE();
  }

  if (z && !y && !x && !w) {
    OCHO();
  }

  if (z && !y && !x && w) {
    NUEVE();
  }

  if (z && !y && x && !w) {
    A();
  }

  if (z && !y && x && w) {
    B();
  }

  if (z && y && !x && !w) {
    C();
  }

  if (z && y && !x && w) {
    D();
  }

  if (z && y && x && !w) {
    E();
  }

  if (z && y && x && w) {
    F();
  }

  
  
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);


}

void CERO(){
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(8, HIGH);
  }
  void UNO(){
    digitalWrite(12, HIGH);
    digitalWrite(11, HIGH);
  }
  void DOS(){
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(7, HIGH);
  }
  void TRES(){
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(7, HIGH);
  }
  void CUATRO(){
    digitalWrite(12, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(7, HIGH);
  }
  void CINCO(){
    digitalWrite(13, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(7, HIGH);
  }
  void SEIS(){
    digitalWrite(13, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(9, HIGH);
  }
  void SIETE(){
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(11, HIGH);
  }
  void OCHO(){
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(7, HIGH);
  }
  void NUEVE(){
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(7, HIGH);
  }
  void A(){
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(7, HIGH);
  }
  void B(){
    digitalWrite(11, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(7, HIGH);
  }
  void C(){
    digitalWrite(13, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(8, HIGH);
  }
  void D(){
    digitalWrite(12, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(7, HIGH);
  }
  void E(){
    digitalWrite(13, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(7, HIGH);
  }
  void F(){
    digitalWrite(13, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(7, HIGH);
  }
