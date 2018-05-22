#include "pustaka.h"

pecahan makePecahan(int pemb, int peny){
    pecahan anyar;
    anyar.pembilang = pemb;
    anyar.penyebut = peny;

    return anyar;
}

void printPecahan(pecahan P){
    printf("%d / %d", P.pembilang, P.penyebut);
}

int pembilang(pecahan P){
    printf(" -> %d", P.pembilang);
}

int penyebut(pecahan P){
    printf(" -> %d", P.penyebut);
}

pecahan addPecahan(pecahan p1, pecahan p2){
    pecahan hasil;
    hasil.pembilang = p1.pembilang*p2.penyebut + p2.pembilang*p1.penyebut;
    hasil.penyebut = p1.penyebut*p2.penyebut;

    return hasil;
}

pecahan subPecahan(pecahan p1, pecahan p2){
    pecahan hasil;
    hasil.pembilang = p1.pembilang*p2.penyebut - p2.pembilang*p1.penyebut;
    hasil.penyebut = p1.penyebut*p2.penyebut;

    return hasil;
}

pecahan mulPecahan(pecahan p1, pecahan p2){
    pecahan hasil;
    hasil.pembilang = p1.pembilang*p2.pembilang;
    hasil.penyebut = p1.penyebut*p2.penyebut;

    return hasil;
}

pecahan divPecahan(pecahan p1, pecahan p2){
    pecahan hasil;
    hasil.pembilang = p1.pembilang*p2.penyebut;
    hasil.penyebut = p1.penyebut*p2.pembilang;

    return hasil;
}

float desimalPecahan(pecahan P){

}

int isEqual(pecahan p1, pecahan p2){

}

int isBigger(pecahan p1, pecahan p2){

}

int isSmall(pecahan p1, pecahan p2){

}
