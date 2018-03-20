#include "pustaka.h"

int years;
char text[];
int angka;
char teks;

int main()
{
    printf("====== Tugas 1 ======\n");

    printf("Masukan tahun: "); scanf("%d",&years);
    is_kabisat(years);

    puts("");
    fflush(stdin);
    printf("====== Tugas 2 ======\n");
    printf("Masukan text: "); gets(text);
    printf("Total huruf vokal pada teks tersebut adalah: %d\n",hitung_vokal(text));

    fflush(stdin);
    printf("Masukkan bilangan prima = "); scanf("%d", &angka);
    cetakprima(checkprime(angka));

    puts("");
    fflush(stdin);
    printf("Masukkan kata-kata = "); gets(text);
    char_frequency(text);
    return 0;
}
