#include "pustaka.h"

/*
    Nama     = Bayu Grafit Nur Alfian
    Kelompok = A11.4207
    NIM      = A11.2017.10284
    this file created, updated, and saved on code blocks linux ubuntu budgie
*/

int main()
{
    pecahan satu;
    /*tugas 1*/
    satu = makePecahan(4,9);

    /*tugas 2*/
    printPecahan(satu);
    puts("\n");

    /*tugas 3*/
    pecahan dua;
    dua = makePecahan(4,9);
    printPecahan(dua);
    pembilang(dua);
    puts("\n");

    /*tugas 4*/
    pecahan tiga;
    tiga = makePecahan(7,2);
    printPecahan(tiga);
    penyebut(tiga);
    puts("\n");

    /*tugas 5*/
    pecahan empat;
    empat = addPecahan(makePecahan(4,9), makePecahan(3,10));
    printPecahan(empat);
    puts("\n");

    /*tugas 6*/
    pecahan lima;
    lima = subPecahan(makePecahan(4,9), makePecahan(3,10));
    printPecahan(lima);
    puts("\n");

    /*tugas 7*/
    pecahan enam;
    enam = mulPecahan(makePecahan(3,4), makePecahan(1,5));
    printPecahan(enam);
    puts("\n");

    /*tugas 8*/
    pecahan tujuh;
    tujuh = divPecahan(makePecahan(4,9), makePecahan(1,2));
    printPecahan(tujuh);
    puts("\n");

    /*tugas 9*/
    float delapan;
    delapan = desimalPecahan(makePecahan(8,10));
    printf("%d", delapan);
    puts("\n");

    /*tugas 10*/
    int sembilan;
    sembilan = isEqual(makePecahan(4,9), makePecahan(8,10));
    printPecahan(makePecahan(4,9));
    printf(" dan ");
    printPecahan(makePecahan(8,10));
    if(sembilan == 1){
        printf(" -> pecahan sama");
    }else{
        printf(" -> pecahan berbeda");
    }
    puts("\n");

    /*tugas 11*/
    int sepuluh;
    sepuluh = isBigger(makePecahan(4,9), makePecahan(8,10));
    printPecahan(makePecahan(4,9));
    printf(" dan ");
    printPecahan(makePecahan(8,10));
    if(sembilan==1){
        printf(" -> pecahan ");
        printPecahan(makePecahan(4,9));
        printf(" lebih besar");
    }else{
        printf(" -> pecahan");
        printPecahan(makePecahan(8,10));
        printf(" lebih besar");
    }
    puts("\n");
    /*tugas 12*/
    int sebelas;
    sebelas = isBigger(makePecahan(4,9), makePecahan(8,10));
    printPecahan(makePecahan(4,9));
    printf(" dan ");
    printPecahan(makePecahan(8,10));
    if(sembilan==1){
        printf(" -> pecahan ");
        printPecahan(makePecahan(8,10));
        printf(" lebih kecil");
    }else{
        printf(" -> pecahan");
        printPecahan(makePecahan(4,9));
        printf(" lebih kecil");
    }

    puts("\n\n\n\");
    puts("===============================");
    printf(" I hope you all use a linux\n");
    puts("===============================");

    return 0;
}
