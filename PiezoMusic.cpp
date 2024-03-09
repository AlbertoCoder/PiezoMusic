#include <Arduino.h>
#include <PiezoMusic.h>

short int PIN_PIEZO = 3;
unsigned short int tempo = 60;


PiezoMusic::PiezoMusic(int tempoPerson){



// INICIALIZACIÓN DE LA DURACIÓN DE LAS NOTAS
 n = (60000) / tempoPerson;
 rp = n * 6;
 r = n * 4;
 bp = n + n * 2;
 b = n * 2;
 np = n + n / 2;
 cp = n / 2 + n / 3;
 c = n / 2;
 sp = c / 2 + c / 3;
 s = c / 2;
 fp = s / 2 + s / 3;
 f = s / 2;

}

void tocarCanci_on(float canci_on[],int longitud, short int ledPin)
{

    for (int i = 0; i < longitud; i+=2)
    {
        if(canci_on[i] == 0){

        digitalWrite(ledPin,LOW); 
        }else{
            digitalWrite(ledPin,HIGH);
        }
        tone(PIN_PIEZO, canci_on[i]);
        delay(canci_on[i + 1]);
    }
    noTone(PIN_PIEZO);
}