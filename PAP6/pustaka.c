#include "pustaka.h"

int binarysearch(int angka, int data[], int jml_data){
    int i=0;
    int min=0, max=jml_data-1, tengah;
    int temu=-1;
    while(temu==-1 && i<jml_data){
        tengah=(min+max)/2;
        if(data[tengah]==angka){
            temu=tengah;
        }else if(data[tengah]<angka){
            min=tengah+1;
        }else{
            max=tengah-1;
        }
        i++;
    }
    return temu;
}

void inputarray(int data[], int jml_data){
    int i=0;
    while(i<jml_data){
        printf("Input array ke-%d = ", i); scanf("%d", &data[i]);
        i++;
    }
}

void cetakarray(int data[], int jml_data){
    int i=0;
    while(i<jml_data){
        printf("%d ", data[i]);
        i++;
    }
}
