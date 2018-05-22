#include "pustaka.h"

/*
    Nama     = Bayu Grafit Nur Alfian
    Kelompok = A11.4207
    NIM      = A11.2017.10284
    this file created, updated, and saved on code blocks linux
*/

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
    float num1, num2;
    num1=P.pembilang;
    num2=P.penyebut;

    return num1/num2;
}

int isEqual(pecahan p1, pecahan p2){
    if(p1.pembilang/p2.pembilang==0 || p2.pembilang/p1.pembilang==0){
        if(p1.penyebut/p2.penyebut==0 || p2.penyebut/p1.penyebut==0){
            return 1;
        }else{
            return 0;
        }
    }else{
        return 0;
    }
}

int isBigger(pecahan p1, pecahan p2){
    float num1=desimalPecahan(p1), num2=desimalPecahan(p2);
    if(num1>num2){
        return 1;
    }else{
        return 0;
    }
}

int isSmall(pecahan p1, pecahan p2){
    float num1=desimalPecahan(p1), num2=desimalPecahan(p2);
    if(num1<num2){
        return 1;
    }else{
        return 0;
    }
}
