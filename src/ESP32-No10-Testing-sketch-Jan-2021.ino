#define LED_BUILTIN 2 // works on ESP32 Dev Module 30-pin, but 38-pin version doesn't have onboard addressable LED

void setup()
{
  // put your setup code here, to run once:

  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(115200);
}

void loop()
{
  // put your main code here, to run repeatedly:
  Serial.println("Hello World");

  digitalWrite(LED_BUILTIN, HIGH); // turn the LED on (HIGH is the voltage level)
  delay(100);
  digitalWrite(LED_BUILTIN, LOW); // turn the LED off by making the voltage LOW
  delay(1000);
}
