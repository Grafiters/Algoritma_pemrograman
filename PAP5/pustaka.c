#include "pustaka.h"

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
    int i=0;
}

void cetakarray(int data[],int panjang){
    int i=0;
    while(i<panjang){
        printf("%d, ", data[i]);
        i++;
    }
}
