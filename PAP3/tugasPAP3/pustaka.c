#include "header.h"

/**
    Nama        = Bayu Grafit Nur Alfian
    NIM         = A11.2017.10284
    Kelomok     = 4207
    TUGAS PAP 3
*/

int count_array(int data[], int jml_data){
    int i, jumlah=0;
    for(i=0;i<jml_data;i++){
        if(data[i]!='\0'){
            jumlah++;
        }
    }
    return jumlah;
}

int cek_urut(int data[], int jml_data){
    int i, temp;
    i=0;
    while(i<jml_data-1){
        if(data[i]<data[i+1]){
            temp = 1;
        } else {
            temp = 0;
            break;
        }
        i++;
    }
    return temp;
}

void bubble_short_1(int arr[], int len){
    int i, j, temp;
    i=0;
    while(i<len){
        cetak_array(arr,len);
        j=0;
        while(j<len-1){
            if(arr[j]>arr[j+1]){
                temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j]=temp;
            }
            j++;
        }
        i++;
        printf("\n");
    }
}

void bubble_short_2(int arr[], int len){
    int a, b, temp, query;
    for(a=0;a<len-1;a++){
        query=0;
        for(b=0;b<len-a-1;b++){
            if(arr[b]>arr[b+1]){
                temp = arr[b+1];
                arr[b+1]=arr[b];
                arr[b]=temp;
                query=1;
            }
        }
        if(query!=0){
            cetak_array(arr, len);
        }
        puts("");
    }
}

void cetak_array(int data[], int jml_data){
    int i;
    for(i=0;i<jml_data;i++){
        if(i<jml_data-1){
            printf("%d, ", data[i]);
        } else {
            printf("%d", data[i]);
        }
    }
}
