#define red_led 9 // define red led
#define green_led 10
#define blue_led 11

void setup()
{
  pinMode(red_led, OUTPUT);
  pinMode(green_led, OUTPUT);
  pinMode(blue_led, OUTPUT);
  digitalWrite(red_led, LOW);
  digitalWrite(green_led, LOW);
  digitalWrite(blue_led, LOW);
  Serial.begin(9600);
}

void loop()
{
  if (Serial.available()){
    char led_specifier = Serial.read();
    write_leds(led_specifier);
  }
}

void write_leds(char led)
{
  if (led == 'r'){
    digitalWrite(red_led, HIGH);
    return;
  }
  if (led == 'R'){
    digitalWrite(red_led, LOW);
    return;
  }
  if (led == 'g'){
    digitalWrite(green_led, HIGH);
    return;
  }
   if (led == 'G'){
    digitalWrite(green_led, LOW);
    return;
  }
  if (led == 'b'){
    digitalWrite(blue_led, HIGH);
    return;
  }
   if (led == 'B'){
    digitalWrite(blue_led, LOW);
    return;
  }
  
  return;
}
