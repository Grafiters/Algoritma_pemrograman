#include "pustaka.h"

int data[];
int jml_data, angka, hasil, hasil1;
char whord[], text[];

int main()
{
    printf("Inputkan jumlah data array = "); scanf("%d", &jml_data);
    int data[jml_data];
    inputarray(data,jml_data);
    puts("\n");
    cetakarray(data,jml_data);
    puts("");
    printf("Input angka yang dicari = "); scanf("%d", &angka);
    hasil=binarysearch(angka,data,jml_data);
    printf("apakah angka %d ada pada array tesebut %s", angka,binarysearch(angka,data,jml_data)?"TRUE":"FALSE");
    puts("\n");
    printf("Masukkan kalimat = "); scanf("%s", &text);
    printf("%s\n", text);
    printf("Masukkan kata yang ingin anda cari = "); scanf("%s", &whord);
    hasil=search_word(whord,text);
    if(hasil==1){
        hasil1="TRUE";
    }else{
        hasil1="FALSE";
    }
    printf("%s", hasil1);

    return 0;
}
