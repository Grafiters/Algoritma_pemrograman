#include "header.h"

int checkprime(int prime){
    int i=2, temp;
        while (i<prime){
            if(prime%i!=0){
                temp = 0;
            }else{
                temp = 1;
                break;
            }
            i++;
        }
        return temp;
}

void cetakprima(int prima){
    if(prima==0){
        printf("Angka yang anda masukkan adalah angka prima\n");
    }else{
        printf("Angka yang anda masukkan bukan angka prima");
    }
}
