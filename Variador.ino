const int durada  = 9;
const int pot0 = A0;
int valPot0;
const int pot1 = A1;
int valPot1;

void setup() {
pinMode(durada,OUTPUT);  // put your setup code here, to run once:

}

void loop() {
valPot0 = analogRead (pot0);
valPot1 = analogRead (pot1);

tone (durada, valPot0, valPot1);
delay (2*valPot1);
}
