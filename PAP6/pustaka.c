#include "pustaka.h"

int binarysearch(int angka, int data[], int jml_data){
    int i=0;
    int min=0, max=jml_data-1, tengah;
    int temu=-1;
    while(temu==-1 && i<jml_data){
        tengah=(min+max)/2;
        if(data[tengah]==angka){
            temu=tengah;
        }else if(data[tengah]<angka){
            min=tengah+1;
        }else{
            max=tengah-1;
        }
        i++;
    }
    return temu;
}

int search_word(char whord[], char text[]){
    int i=0, j, k, sama;
    int p1=strlen(text);
    int p2=strlen(whord);

    while(i<p1){
        sama=0;
        for(j=0,k=i;j<p2;j++,k++){
            if(whord[j]=text[k]){
                sama++;
            }
        }
        if(sama==p2){
            return 1;
        }
        i++;
    }
    return 0;
}

void inputarray(int data[], int jml_data){
    int i=0;
    while(i<jml_data){
        printf("Input array ke-%d = ", i); scanf("%d", &data[i]);
        i++;
    }
}

void cetakarray(int data[], int jml_data){
    int i=0;
    while(i<jml_data){
        printf("%d ", data[i]);
        i++;
    }
}
