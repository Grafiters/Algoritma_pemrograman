#include "header.h"

/*
    Nama     = Bayu Grafit Nur Alfian
    NIM      = A11.2017.10284
    Kelompok = 4207
    PAP 1    = tugas 6
*/

int angka[];

int main()
{
    int a, batas;

    printf("input batas : ");scanf("%d", &batas);

    for(a=0;a<batas;a++){
    printf("massukan angka : "); scanf("%d",&angka[a]);
    }

    printf("angka maksimalnya adalah %d", maxs(angka,batas));
    return 0;
}
