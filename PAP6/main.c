#include "pustaka.h"

int data[];
int jml_data, angka, hasil;

int main()
{
    printf("Inputkan jumlah data array = "); scanf("%d", &jml_data);
    int data[jml_data];
    inputarray(data,jml_data);
    puts("");
    cetakarray(data,jml_data);
    puts("");
    printf("Input angka yang dicari = "); scanf("%d", &angka);
    hasil=binarysearch(angka,data,jml_data);
    printf("apakah angka %d ada pada array tesebut %s", angka,binarysearch(angka,data,jml_data)?"TRUE":"FALSE");
    return 0;
}
