#include <stdio.h>
#include <stdlib.h>

/*
    Nama     = Bayu Grafit Nur Alfian
    NIM      = A11.2017.10284
    Kelompok = 4207
    PAP1     = tugas 1 dan 2
*/

void print_identitas();
int print_jumlah(int num1, int num2);

int main()
{

    int num1;
    int num2;
    print_identitas();

    printf("Masukkan Angka untuk di tambahkan angka 1 = "); scanf("%d",&num1);
    printf("Masukkan Angka untuk di tambahkan angka 2 = "); scanf("%d",&num2);

    printf("Angka %d + %d = %d",num1,num2,print_jumlah(num1,num2));
    return 0;
}

void print_identitas()
{
    char nama[50];
    char nim[20];
    char alamat[100];

    printf("Masukkan Nama Lengkap = "); gets(nama);
    printf("Masukkan NIM = "); gets(nim);
    printf("Masukkan Alamat Rumah = "); gets(alamat);
    puts();
    printf("%s\n", nama);
    printf("%s\n", nim);
    printf("%s\n", alamat);
    puts();
}

int print_jumlah(int num1, int num2)
{
    return num1+num2;
}
