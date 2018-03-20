#include "header.h"

int maxs(int angka[], int batas){
    int a, temp=0;

    for(a=0;a<batas;a++){
        if(angka[a]>temp){
            temp=angka[a];
        }
    }
    return temp;
}
