#include "header.h"

void diamond(int row){
    int i, a, b, kolom;

    kolom=row-1;
    for(i=1;i<=row;i++){
        for(a=1;a<=kolom;a++){
            printf(" ");
        }
        kolom--;

        for(b=1;b<=2*i-1;b++){
            printf("*");
        }
        printf("\n");
    }

    kolom=1;
    for(i=1;i<=row-1;i++){
        for(a=1;a<=kolom;a++){
            printf(" ");
        }
        kolom++;
        for(b=1;b<=2*(row-i)-1;b++){
            printf("*");
        }
        printf("\n");
    }
}
