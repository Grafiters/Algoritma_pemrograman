#include "pustaka.h"

/**
   Nama     = Bayu Grafit Nur Alfian
   NIM      = A11.2017.10284
   Kelompok = A11.4207
   Created and edited on code block linux ubuntu budgie
*/

int hasil, hasil1, hasil2;
int hasil3, hasil4, hasil5;
int number, fibos;
int data[], batas;

int main()
{
    printf("====== Proram Penjumlahan ======\n");
    printf("masukkan batas 1 = "); scanf("%d", &a);
    printf("masukkan batas 2 = "); scanf("%d", &b);
    cetak(a);
    puts("");
    cetak(b);
    puts("");
    hasil=add_rec(a,b);
    printf("%d ", hasil);
    puts("\n");

    printf("====== Proram Pengurangan ======\n");
    printf("massukan angka pertama = "); scanf("%d", &c);
    printf("massukan angka kedua   = "); scanf("%d", &d);
    cetak(c);
    puts("");
    cetak(d);
    puts("");
    hasil1=sub_rec(c,d);
    printf("%d ", hasil1);
    puts("\n");

    printf("====== Proram Perkalian ======\n");
    printf("massukan angka pertama = "); scanf("%d", &e);
    printf("massukan angka kedua   = "); scanf("%d", &f);
    hasil2=mul_rect(e,f);
    puts("");
    printf("%d ", hasil2);
    puts("\n");

    printf("====== Proram Pembagian ======\n");
    printf("massukan angka pertama = "); scanf("%d", &g);
    printf("massukan angka kedua   = "); scanf("%d", &h);
    hasil3=div_rec(g,h);
    puts("");
    printf("%d ", hasil3);
    puts("\n");

    printf("====== Proram Perpangkatan ======\n");
    printf("massukan angka pertama = "); scanf("%d", &i);
    printf("massukan angka kedua   = "); scanf("%d",&j);
    hasil4=pow_rec(i,j);
    puts("");
    printf("%d ", hasil4);
    puts("\n");

    printf("====== Proram Pemfaktoran ======\n");
    printf("massukan angka faktorial = "); scanf("%d",&number);
    hasil5=factorial(number);
    puts("");
    printf("%d", hasil5);
    puts("\n");

    printf("====== Proram Fibonacci ======\n");
    printf("massukan batas fibonacci = "); scanf("%d", &fibos);
    fibonacci(fibos);
    puts("\n");

    printf("====== Proram Menghitung Array ======\n");
    printf("massukan batas = "); scanf("%d", &batas);
    int i=0;
    while(i<batas){
        printf("massukan angka ke-%d = ", i+1); scanf("%d",&data[i]);
        i++;
    }
    printf("%d", sum_traversal(data, batas));
    puts("\n\n");


    puts("===============================");
    printf(" I hope you all use a linux\n");
    puts("===============================");
    return 0;
}

