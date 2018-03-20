#include "header.h"

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
