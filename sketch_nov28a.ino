int pin1 = 13;
int pin2 = 10; 
int pin3 = 8;
int pin4 = 7;
int pin5 = 4;
int pin6 = 2;

int rand1 = 0;
int rand2 = 0;
int rand3 = 0;
int rand4 = 0;
int rand5 = 0;
int rand6 = 0;

int time = 500;

void setup() {
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
  pinMode(pin4, OUTPUT);
  pinMode(pin5, OUTPUT);
  pinMode(pin6, OUTPUT);

  randomSeed(analogRead(0));

  rand1 = random(1,7);
  rand2 = random(1,7);
  rand3 = random(1,7);
  rand4 = random(1,7);
  rand5 = random(1,7);
  rand6 = random(1,7);
}

void doDice(int rand)
{
    switch(rand)
    {
        case 1:
        digitalWrite(pin4, LOW);
        digitalWrite(pin5, HIGH);
        digitalWrite(pin6, HIGH);
        delayMicroseconds(time);
        break;

        case 2:
        digitalWrite(pin4, LOW);
        digitalWrite(pin5, LOW);
        digitalWrite(pin6, LOW);
        delayMicroseconds(time);

        digitalWrite(pin4, HIGH);
        digitalWrite(pin5, HIGH);
        digitalWrite(pin6, LOW);
        delayMicroseconds(time);
        break;

        case 3:
        digitalWrite(pin4, LOW);
        digitalWrite(pin5, LOW);
        digitalWrite(pin6, LOW);
        delayMicroseconds(time);

        digitalWrite(pin4, LOW);
        digitalWrite(pin5, HIGH);
        digitalWrite(pin6, HIGH);
        delayMicroseconds(time);

        digitalWrite(pin4, HIGH);
        digitalWrite(pin5, HIGH);
        digitalWrite(pin6, LOW);
        delayMicroseconds(time);
        break;

        case 4:
        digitalWrite(pin4, LOW);
        digitalWrite(pin5, LOW);
        digitalWrite(pin6, LOW);
        delayMicroseconds(time);

        digitalWrite(pin4, LOW);
        digitalWrite(pin5, HIGH);
        digitalWrite(pin6, LOW);
        delayMicroseconds(time);

        digitalWrite(pin4, HIGH);
        digitalWrite(pin5, LOW);
        digitalWrite(pin6, LOW);
        delayMicroseconds(time);

        digitalWrite(pin4, HIGH);
        digitalWrite(pin5, HIGH);
        digitalWrite(pin6, LOW);
        delayMicroseconds(time);
        break;

        case 5:
        digitalWrite(pin4, LOW);
        digitalWrite(pin5, LOW);
        digitalWrite(pin6, LOW);
        delayMicroseconds(time);

        digitalWrite(pin4, LOW);
        digitalWrite(pin5, HIGH);
        digitalWrite(pin6, LOW);
        delayMicroseconds(time);

        digitalWrite(pin4, LOW);
        digitalWrite(pin5, HIGH);
        digitalWrite(pin6, HIGH);
        delayMicroseconds(time);

        digitalWrite(pin4, HIGH);
        digitalWrite(pin5, LOW);
        digitalWrite(pin6, LOW);
        delayMicroseconds(time);

        digitalWrite(pin4, HIGH);
        digitalWrite(pin5, HIGH);
        digitalWrite(pin6, LOW);
        delayMicroseconds(time);
        break;

        case 6:
        digitalWrite(pin4, LOW);
        digitalWrite(pin5, LOW);
        digitalWrite(pin6, LOW);
        delayMicroseconds(time);

        digitalWrite(pin4, LOW);
        digitalWrite(pin5, LOW);
        digitalWrite(pin6, HIGH);
        delayMicroseconds(time);

        digitalWrite(pin4, LOW);
        digitalWrite(pin5, HIGH);
        digitalWrite(pin6, LOW);
        delayMicroseconds(time);

        digitalWrite(pin4, HIGH);
        digitalWrite(pin5, LOW);
        digitalWrite(pin6, LOW);
        delayMicroseconds(time);

        digitalWrite(pin4, HIGH);
        digitalWrite(pin5, LOW);
        digitalWrite(pin6, HIGH);
        delayMicroseconds(time);

        digitalWrite(pin4, HIGH);
        digitalWrite(pin5, HIGH);
        digitalWrite(pin6, LOW);
        delayMicroseconds(time);
        break;
    }
}


void loop() { 
    //dice1
    digitalWrite(pin1, LOW);
    digitalWrite(pin2, LOW);
    digitalWrite(pin3, LOW);
    doDice(rand1);
    delayMicroseconds(time);
    //dice2
    digitalWrite(pin1, LOW);
    digitalWrite(pin2, LOW);
    digitalWrite(pin3, HIGH);
    doDice(rand2);
    delayMicroseconds(time);
    //dice3
    digitalWrite(pin1, LOW);
    digitalWrite(pin2, HIGH);
    digitalWrite(pin3, LOW);
    doDice(rand3);
    delayMicroseconds(time);
    //dice4
    digitalWrite(pin1, LOW);
    digitalWrite(pin2, HIGH);
    digitalWrite(pin3, HIGH);
    doDice(rand4);
    delayMicroseconds(time);
    //dice5
    digitalWrite(pin1, HIGH);
    digitalWrite(pin2, LOW);
    digitalWrite(pin3, LOW);
    doDice(rand5);
    delayMicroseconds(time);
    //dice6
    digitalWrite(pin1, HIGH);
    digitalWrite(pin2, LOW);
    digitalWrite(pin3, HIGH);
    doDice(rand6);
    delayMicroseconds(time);
}


