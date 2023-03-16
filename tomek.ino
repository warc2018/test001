// funkcja loop ()

const int StartPin = 8;
const int EchoPin = 9;
long czas = 0;
int maxDyst = 250;
int minDyst = 100;

#define MAX 2

#define NORMAL 3

#define MIN 4

#define PIEZO 11

void setup()
{
    pinMode(StartPin, OUTPUT);
    pinMode(EchoPin, INPUT);
    Serial.begin(9600);

    pinMode(MAX, OUTPUT);
    pinMode(NORMAL, OUTPUT);
    pinMode(MIN, OUTPUT);
    pinMode(PIEZO, OUTPUT);
}
void loop()
{
    digitalWrite(StartPin, LOW);
    delayMicroseconds(2);
    digitalWrite(StartPin, HIGH);
    delayMicroseconds(10);

    digitalWrite(StartPin, LOW);

    czas = pulseIn(EchoPin, HIGH);

    long Dystans_mm = Dystans(czas);

    Serial.print("Dystans=");
    Serial.print(Dystans_mm);
    Serial.println("mm");
}
if (Dystans_mm < minDyst)
{
    digitalWrite(MIN, HIGH);
    analogWrite(PIEZO, 128);
    delay(500);
    digitalWrite(MIN, LOW);
    digitalWrite(PIEZO, LOW);
}
else if (Dystans_mm>minDyst && Dystans_mm<=maxDyst)
{
    digitalWrite(NORMAL, HIGH);
    delay(500);
    digitalWrite(NORMAL, LOW);
}
else
{
    // Dystans_mm>maxDyst
    digitalWrite(Max, LOW);
  }
long Dystans(long czas)
{
    // Obliczenie dystansu w mm
    //((czas)*(Predkosc dzwieku)) 2*10

  long Dystans(alc);
  Dystans(alc=((czas/2.9)/2));
  return Dystans(alc) ;
}
