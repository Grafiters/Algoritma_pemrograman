#include "pustaka.h"

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
    pecahan delapan;

    /*tugas 10*/
    pecahan sembilan;

    /*tugas 11*/
    pecahan sepuluh;

    /*tugas 12*/
    pecahan sebelas;

    return 0;
}
