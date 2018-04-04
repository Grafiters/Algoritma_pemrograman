#include "pustaka.h"

/**
    Nama     : Bayu Grafit Nur Alfian
    NIM      : A11.2017.10284
    Kelompok : 4207
    Tugas PAP 5 (created, read, and update on linux)
*/

int sequent_search(int angka, int data[], int jml_data){
int i=0;
    while(i<jml_data){
            if(data[i]==angka){
                return 1;///untuk menyatakan true pada search
        }
        i++;
    }
    return 0;///untuk menyatakan false pada search
}

int is_inverse(int list1[], int list2[], int jml_data){
    int i=0,hasil, batas;
    batas=jml_data-1;
    while(i<batas && hasil!=0){
        hasil=1;
        if(list1[i]!=list2[batas-1]){
            hasil=1;
        }
        i++;
    }
    return hasil;
}

void min_max(int data[], int jml_data, int *min, int *max){
    int i=0;
    *min=data[0];
    *max=data[0];
    while(i<jml_data){
        if(data[i]<*min){
            *min=data[i];
        }else if(data[i]>*max){
            *max=data[i];
        }
        i++;
    }
}

int min_max_gap(int data[], int jml_data){
    int min, max;
    min_max(data,6,&min,&max);
    return max-min;
}

int at_least(char huruf, int jml, char teks[]){
    int i=0, temp=0, batas;
    batas=strlen(teks);
    while(teks[i]!='\0'){
        if(teks[i]==huruf){
            temp++;
        }
        i++;
    }
    if(temp>=jml){
        return 1;
    } else {
        return 0;
    }
}

void cetakarray(int data[],int panjang){
    int i=0;
    while(i<panjang){
        printf("%d, ", data[i]);
        i++;
    }
}
