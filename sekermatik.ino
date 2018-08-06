#include <Keyboard.h>
void setup()
{
  pinMode(2,INPUT_PULLUP);
  pinMode(3,INPUT_PULLUP);
  pinMode(4,INPUT_PULLUP);
  pinMode(5,INPUT_PULLUP);
  pinMode(6,INPUT_PULLUP);
  pinMode(7,INPUT_PULLUP);
  Keyboard.begin();
}
void loop()
{
  if (digitalRead(2) == LOW )
  {
    Keyboard.write(115);
    delay(100;)
  }
  if (digitalRead(3 == LOW ))
  {
    Keyboard.write(60);
    delay(100;)
  }
  if (digitalRead(4 == LOW ))
  {
    Keyboard.write(63);
    delay(100;)
  }
  if (digitalRead(5 == LOW ))
  {
    Keyboard.write(113);
    delay(100;)
  }
  if (digitalRead(6 == LOW ))
  {
    Keyboard.write(99);
    delay(100;)
  }
}
