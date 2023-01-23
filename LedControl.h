class LedControl
{
private:
  int i;

public:
  void Begin(int PIN)
  {
    pinMode(PIN, OUTPUT);
  }
    void ON(int PIN)
    {
      digitalWrite(PIN, HIGH);
    }

    void OFF(int PIN)
    {
      digitalWrite(PIN, LOW);
    }

    void Blink(int PIN, int Time, int repeat)
    {
      for (i = 0; i <= repeat; i++)
      {
        digitalWrite(PIN, HIGH);
        delay(Time);
        digitalWrite(PIN, LOW);
        delay(Time);
      }
    }
  };
