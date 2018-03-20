#include <stdio.h>
#include <stdlib.h>

/*
    Nama     = Bayu Grafit Nur Alfian
    NIM      = A11.2017.10284
    Kelompok = 4207
    PAP 1    = tugas 3
*/

int hitung(int num1, int num2, char opsi);

int main()
{
    int num1, num2;
    char opsi;

    printf("masukkan operasi: "); scanf("%c",&opsi);
    printf("masukkan angka pertama :"); scanf("%d",&num1);
    printf("masukkan angka kedua :"); scanf("%d",&num2);

    hitung(num1,num2,opsi);
    return 0;
}

int hitung(int num1, int num2, char opsi){

    int hasil;

    switch(opsi){
        case '+':
            hasil=num1+num2;
            printf("%d %c %d = %d",num1,opsi,num2,hasil);
            break;
        case'-':
            hasil=num1-num2;
            printf("%d %c %d = %d",num1,opsi,num2,hasil);
            break;
        case'*':
            hasil=num1*num2;
            printf("%d %c %d = %d",num1,opsi,num2,hasil);
            break;
        case'/':
            hasil=num1/num2;
            printf("%d %c %d = %d",num1,opsi,num2,hasil);
            break;
    }
}
