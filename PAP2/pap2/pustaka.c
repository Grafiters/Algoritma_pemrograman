#include "pustaka.h"

int is_kabisat(int years){
    int kabisat;

    if (years%2==0){
        kabisat= 1;
    }else{
        kabisat= 0;
    }
    printf("tahun tersebut adalah tahun %d", kabisat);
}


int hitung_vokal(char text[]){
    int i=0, temp=0;

    while(text[i] != '\0'){
        switch(tolower(text[i])){
            case 'a':
                temp++;
                break;
            case 'e':
                temp++;
                break;
            case 'i':
                temp++;
                break;
            case 'u':
                temp++;
                break;
            case 'o':
                temp++;
                break;
        }
        i++;
    }
    return temp;
}

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

void char_frequency(char teks[]){
    int i,freq[26];
    i= 0;

    while(i<26){
        freq[i]= 0;
        i++;
    }

    i= 0;
    while(i<strlen(teks)){
        if (tolower(teks[i])>='a' && tolower(teks[i])<='z'){
            freq[tolower(teks[i])-97]++;
        } else if (tolower(teks[i])>='A' && tolower(teks[i])<='Z'){
            freq[tolower(teks[i])-97]++;
        }
        i++;
    }

    i= 0;
    while(i<26){
        if (freq[i]!=0){
            printf("%c= %d, ", i+97, freq[i]);
        }
        i++;
    }
    printf("\n");
}

