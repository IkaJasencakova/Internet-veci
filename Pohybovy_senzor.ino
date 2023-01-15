bool isToneOn = false;
int frequency = 16;
void setup()
{
  pinMode(2, INPUT);
  pinMode(3, OUTPUT);
  }
  void loop()
  {
    if(digitalRead(2) == HIGH)
    {
      for(int a = 0; a < 30; a++)
      {
        if(isToneOn)
        {
          noTone(3);
          isToneOn = false;
          }
          else
          {
            tone(3, frequency);
            isToneOn = true;
            }
            delay(150);
            }
            }
            }
