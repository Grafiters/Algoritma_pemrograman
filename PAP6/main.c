#include "pustaka.h"

/**
    Nama     : Bayu Grafit Nur Alfian
    NIM      : A11.2017.10284
    Kelompok : 4207
    Tugas PAP 5 (created, read, and update on linux)
*/

int data[];
int jml_data, angka, hasil, hasil1;
char whord[], text[];
char text1[], text2[];

int main()
{
    puts("====== Tugas 1 Binary sort ======");
    printf("Inputkan jumlah data array = "); scanf("%d", &jml_data);
    int data[jml_data];
    inputarray(data,jml_data);
    puts("\n");

    BubbleShort(data,jml_data);
    cetakarray(data,jml_data);
    puts("");

    printf("Input angka yang dicari = "); scanf("%d", &angka);
    printf("apakah angka %d ada pada array tesebut %s", angka, binarysearch(angka,data,jml_data)?"TRUE":"FALSE");
    puts("\n");

    puts("====== Tugas 2 Search word ======");
    printf("Masukkan kalimat = "); scanf("%s", &text);
    printf("%s\n", text);
    printf("Masukkan kata yang ingin anda cari = "); scanf("%s", &whord);

    printf("%s\n", search_word(whord,text)?"TRUE":"FALSE");

    puts("\n====== Tugas 3 Anagram =======");
    printf("Masukkan kalimat pertama = "); scanf("%s", &text1);
    printf("Masukkan kalimat kedua = "); scanf("%s", &text2);
    printf("%s", text1);
    puts("");
    printf("%s", text2);
    puts("");
    printf("\nText di atas apakah anagram = %s", is_anagram(text1, text2)?"TRUE":"FALSE");
    return 0;
}
