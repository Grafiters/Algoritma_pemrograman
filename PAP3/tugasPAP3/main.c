#include "header.h"

int arr1[]={10,44,'\0',2,'\0'};
int arr2[]={3,44,38,5,47};
int arr3[]={3,44,38,5,47};
int arr4[]={15,36,27,2,26};

int main()
{
    cetak_array(arr1,5);
    printf("\n");
    printf("Banyak Array yang ada adalah = %i\n\n", count_array(arr1,5));

    cetak_array(arr2,5);
    puts("");
    if(cek_urut(arr2,5)!=0){
        printf("Sudah Urut\n");
    }else{
        printf("Belum Urut\n");
    }
    puts("\n");

    bubble_short_1(arr3,5);
    puts("\n");

    bubble_short_2(arr4,5);
    puts("\n");

    return 0;
}
