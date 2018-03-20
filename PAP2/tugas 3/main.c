#include "header.h"


/*
    Nama     : Bayu Grafit Nur Alfian
    NIM      : A1.2017.10284
    Kelompok : A11.4207
*/


int angka;

int main()
{
    printf("Masukkan bilangan prima = "); scanf("%d", &angka);
    cetakprima(checkprime(angka));
    return 0;
}
