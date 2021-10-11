int E = 13;
int D = 12;
int C = 11;
int DP = 10;
int B = 9;
int A = 8;
int F = 7;
int G = 6;

void one(){
  digitalWrite(E, LOW); 
  digitalWrite(D, LOW); 
  digitalWrite(C, HIGH); 
  digitalWrite(DP,LOW); 
  digitalWrite(B, HIGH); 
  digitalWrite(A, LOW); 
  digitalWrite(F, LOW); 
  digitalWrite(G, LOW); 
}


void five(){
  digitalWrite(E, HIGH); 
  digitalWrite(D, HIGH); 
  digitalWrite(C, HIGH); 
  digitalWrite(DP,LOW); 
  digitalWrite(B, LOW); 
  digitalWrite(A, HIGH); 
  digitalWrite(F, HIGH); 
  digitalWrite(G, HIGH); 
}

void eight(){
  digitalWrite(E, HIGH); 
  digitalWrite(D, HIGH); 
  digitalWrite(C, HIGH); 
  digitalWrite(DP,LOW); 
  digitalWrite(B, HIGH); 
  digitalWrite(A, HIGH); 
  digitalWrite(F, HIGH); 
  digitalWrite(G, HIGH); 
}

void nine(){
  digitalWrite(E, HIGH); 
  digitalWrite(D, HIGH); 
  digitalWrite(C, HIGH); 
  digitalWrite(DP,LOW); 
  digitalWrite(B, HIGH); 
  digitalWrite(A, HIGH); 
  digitalWrite(F, HIGH); 
  digitalWrite(G, HIGH); 
}

void zero(){
  digitalWrite(E, HIGH); 
  digitalWrite(D, HIGH); 
  digitalWrite(C, HIGH); 
  digitalWrite(DP,HIGH); 
  digitalWrite(B, HIGH); 
  digitalWrite(A, HIGH); 
  digitalWrite(F, HIGH); 
  digitalWrite(G, HIGH); 
}


void setup()
{  
  pinMode(E, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(DP, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(A, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  one();
	delay(1000);
  five();
	delay(1000);
  eight();
	delay(1000);
  nine();
 	delay(1000);
  zero();

  
	int potMeasure = analogRead(A5);
  	potMeasure = map(potMeasure, 0, 1023, 0, 99);
  	Serial.println(potMeasure);
 
    
}
