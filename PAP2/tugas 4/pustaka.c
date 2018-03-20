#include "header.h"

void char_frequency(char text[]){
    int i,freq[26];
    i= 0;

    while(i<26){
        freq[i]= 0;
        i++;
    }

    i= 0;
    while(i<strlen(text)){
        if (tolower(text[i])>='a' && tolower(text[i])<='z'){
            freq[tolower(text[i])-97]++;
        } else if (tolower(text[i])>='A' && tolower(text[i])<='Z'){
            freq[tolower(text[i])-97]++;
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

