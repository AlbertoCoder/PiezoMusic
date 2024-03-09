
#ifndef PIEZO_MUSIC_H
#define PIEZO_MUSIC_H

#include <Arduino.h>

class PiezoMusic
{

public:
    PiezoMusic(int tempoPersonalizado);
    void setTempo(int tempoPerson);
    int tempoPersonalizado;

    short int PIN_PIEZO;
    unsigned short int tempo;

    int n;
    int rp;
    int r;
    int bp;
    int b;
    int np;
    int cp;
    int c;
    int sp;
    int s;
    int fp;
    int f;
};


void tocarCanci_on(float canci_on[], int longitud, short int ledPin);

#endif
