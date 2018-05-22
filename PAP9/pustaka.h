#ifndef PUSTAKA_H_INCLUDED
#define PUSTAKA_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int pembilang;
    int penyebut;
}pecahan;

pecahan makePecahan(int pemb, int peny);
void printPecahan(pecahan P);

int pembilang(pecahan P);
int penyebut(pecahan P);
int isEqual(pecahan p1, pecahan p2);
int isBigger(pecahan p1, pecahan p2);
int isSmall(pecahan p1, pecahan p2);

pecahan addPecahan(pecahan p1, pecahan p2);
pecahan subPecahan(pecahan p1, pecahan p2);
pecahan mulPecahan(pecahan p1, pecahan p2);
pecahan divPecahan(pecahan p1, pecahan p2);

float desimalPecahan(pecahan P);
#endif // PUSTAKA_H_INCLUDED
