void setup()
{
  Serial.begin(9600);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop()
{
int c= analogRead(A1);
Serial.println(c);
  if (c==9600)
  { digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
  }
  else
  { digitalWrite(4,HIGH);
    delay(20);
    digitalWrite(4,LOW);
    delay(20);
  }
}