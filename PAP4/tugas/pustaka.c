#include "pustaka.h"

void compress_array(int data[], int jml_data){
    int i, jumlah=0;
    for(i=0;i<jml_data;i++){
        if(data[i]!=0){
            printf("%d, ", data[i]);
        }
    }
    return jumlah;
}

void selection_short1(int data[], int jml_data){
    int i, j, temp;
    int idx=0;
    i=0;
    while(i<jml_data){
        cetak_array(data,jml_data);
        idx = i;
        j=i;
        while(j<jml_data){
            if(data[idx]>data[j]){
                idx = j;
            }
            j++;
        }
        if(idx!=i){
            temp = data[i];
            data[i]=data[idx];
            data[idx]=temp;
        }
        i++;
        puts("");
    }
}

void selection_short2(int data[], int jml_data){
    int i, j, temp, query=0;
    int idx=0;
    i=0;
    while(i<jml_data){
        idx = i;
        j=i;
        while(j<jml_data){
            if(data[idx]>data[j]){
                idx = j;
            }
            j++;
        }
        if(idx!=i){
            temp = data[i];
            data[i]=data[idx];
            data[idx]=temp;
            query=1;
            if(query!=0){
                cetak_array(data,jml_data);
            }
        puts("");
        }
        i++;
    }
}

int get_median(int data[], int jml_data){
    int i, jumlah= 0;
    for(i=0;i<jml_data;i++){
        jumlah++;
        if(jumlah%2!=0){
            if(jumlah > 1 && jumlah < jml_data){
            printf("\n");
                printf("\nNilai tengah adalah %d\n", data[i]);
            }
        }
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
