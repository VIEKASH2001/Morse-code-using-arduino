// USE THIS TRANSLATOR: http://www.unit-conversion.info/texttools/morse-code/
int lightPin = 13;
String str; 
void setup() {
  pinMode(lightPin, OUTPUT);
  digitalWrite(lightPin, LOW);
  Serial.begin(9600);
  str=""; //WRITE YOUR MESSAGE HERE IN CAPS
  translate(str);
}

void loop() {
 }
 
void translate(String ip)
{
  int ipl = ip.length();
  for (int i = 0; i < ipl; i++) {
    char var = ip[i];
  switch (var) {
   case 'A':
    dot();
    dash();
    break;
    
   case 'B':
    dash();
    dot();
    dot();
    dot();
    break;
    
   case 'C':
    dash();
    dot();
    dash();
    dot();
    break;
    
   case 'D':
    dash();
    dot();
    dot();
    break;
    
   case 'E':
    dot();
    break; 
    
   case 'F':
    dot();
    dot();
    dash();
    dot();
    break;
    
   case 'G':
    dash();
    dash();     
    dot();
    break;
    
   case 'H':
    dot();
    dot();
    dot();
    dot();
    break;
    
   case 'I':
    dot();
    dot();
    break;
    
   case 'J':
    dot();
    dash();
    dash();
    dash();
    break; 
     
   case 'K':
    dash();
    dot();
    dash();
    break;
    
   case 'L':
    dot();
    dash();
    dot();
    dot();
    break;
    
   case 'M':
    dash();
    dash();
    break;
    
   case 'N':
    dash();
    dot();
    break;
    
   case 'O':
    dash();
    dash();
    dash();
    break;  
    
   case 'P':
    dot();
    dash();
    dash();
    dot();
    break;
    
   case 'Q':
    dash();
    dash();
    dot();
    dash();
    break;
    
   case 'R':
    dot();
    dash();
    dot();
    break;
    
   case 'S':
    dot();
    dot();
    dot();
    break;
    
   case 'T':
    dash();
    break; 
     
   case 'U':
    dot();
    dot();
    dash();
    break;
    
   case 'V':
    dot();
    dot();
    dot();
    dash();
    break;
    
   case 'W':
    dot();
    dash();
    dash();
    break;
    
   case 'X':
    dash();
    dot();
    dot();
    dash();
    break;
    
   case 'Y':
    dash();
    dot();
    dash();
    dash();
    break;  
    
   case 'Z':
    dash();
    dash();
    dot();
    dot();
            
   case '.':
    fullstop();
    break;
    
   case ' ':
    space();
    break;
   }
  sep(); 
}
}



void space()
{
  digitalWrite(lightPin, LOW);
  delay(700);
  Serial.print("  "); //??
}

void fullstop()
{
  digitalWrite(lightPin, LOW);
  delay(2000);
  Serial.print("    "); //?????
}
void dot()
{
  digitalWrite(lightPin, HIGH);
  delay(250);
  Serial.print(".");
  gap();
}

void dash()
{
  digitalWrite(lightPin, HIGH);
  delay(700);
  Serial.print("-");
  gap();
}

void gap()
{
digitalWrite(lightPin, LOW);
delay(200);
Serial.print("");
}

void sep()
{
  Serial.print(" ");
}
