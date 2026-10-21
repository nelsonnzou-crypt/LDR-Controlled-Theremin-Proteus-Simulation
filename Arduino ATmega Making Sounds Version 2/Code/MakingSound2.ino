
int speakerPin = 12;
int photocellPin = A0;
void setup()
{
}
void loop()
{
  int reading = analogRead(photocellPin);
  int pitch = 200 + reading / 4;
  tone(speakerPin, pitch);
}
