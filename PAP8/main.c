#include "pustaka.h"

/*
    Nama     = Bayu Grafit Nur Alfian
    Kelompok = A11.4207
    NIM      = A11.2017.10284
    this file created, updated, and saved on code blocks linux
*/

int a, b, hasil;
int c, d, hail1;
int hasil2;
float hasil3;

int data1[]={12, 15, 1, 23, 44, 21, 30};
int data2[] = {19, 16, 22, 15, 9, 28, 11};
int data3[] = {41, 29, 9, 14, 6, 5, 22};

int main()
{
    printf("===== Fungsi untuk mecari bilangan terkecil =====\n");
    printf("masukan angka pertama = "); scanf("%d", &a);
    printf("masukan angka kedua   = "); scanf("%d", &b);
    hasil=min2(a,b);
    printf("nilai terkecil adalah %d ", hasil);

    puts("\n");
    printf("===== Fungsi untuk mecari bilangan terbesar =====\n");
    printf("masukan angka pertama = "); scanf("%d", &c);
    printf("masukan angka kedua   = "); scanf("%d", &d);
    hail1=max2(c,d);
    printf("nilai terbesar adalah %d ", hail1);

    puts("\n");
    printf("===== Fungsi untuk mecari bilangan terbesar suatu array =====\n");
    hasil2=rec_max(data1,0,7);
    printf("nilai terbesar adalah %d", hasil2);

    puts("\n");
    printf("===== Fungsi untuk mecari bilangan terkcil suatu array =====\n");
    printf("nilai terkecil adalah %d ", rec_min(data1,0,7));

    puts("\n");
    printf("===== Fungsi untuk menampilkan seluruh array =====\n");
    rec_print_all(data1,0,7);

    puts("\n");
    printf("===== Fungsi untuk mencari rata-rata suatu array =====\n");
    hasil3=rec_mean(data2,0,7);
    rec_print_all(data2,0,7);
    puts("");
    printf("mean dari data diatas adalah %f ", hasil3);

    puts("\n");
    printf("===== Fungsi untuk mengurutkan program array =====\n");
    printf("Sebelum \n");
    rec_print_all(data3, 0, 7);
    puts("");
    printf("sesudah \n");
    rec_selection_sort(data3,7);
    rec_print_all(data3,0,7);

    puts("\n\n\n");
    puts("===============================");
    printf(" I hope you all use a linux\n");
    puts("===============================");
    return 0;
}
