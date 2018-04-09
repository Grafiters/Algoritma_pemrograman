#include "pustaka.h"

/**
    Nama     : Bayu Grafit Nur Alfian
    NIM      : A11.2017.10284
    Kelompok : 4207
    Tugas PAP 5 (created, read, and update on linux)
*/

void BubbleShort(int data[], int jml_data){
    int i=0, j, temp;
    while(i<jml_data-1){
    j=0;
        while(j<jml_data-1-i){
            if(data[j]>data[j+1]){
                temp=data[j];
                data[j]=data[j+1];
                data[j+1]=temp;
            }
            j++;
        }
        i++;
    }
}

int binarysearch(int angka, int data[], int jml_data){
    int min=0, max=jml_data-1, tengah, i=0;
    while(min<=max){
        while(i<=max){
            printf("%d ", data[i]);
            i++;
        }
        puts("");
        tengah=(min+max)/2;
        if(angka==data[tengah]){
            return angka;
        }else if(angka<data[tengah]){
            max=tengah-1;
        }else if(angka>data[tengah]){
            min=tengah+1;
        }
    }
    return -1;
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
        }else{
            return 0;
        }
        i++;
    }
}

void frequency(char text[], int jml[]){
    int panjang=strlen(text);
    int a=0, b;
    char abjad='a', Abjad='A';
    while(a<30){
        jml[a]=0;
        a++;
    }

    while(a<panjang){
        abjad='a';
        Abjad='A';
        for(b=0;b<panjang;b++,abjad++,Abjad++){
            if(text[a]==abjad || text[a]==Abjad){
                jml[b]++;
            }
        }
        a++;
    }
}

int is_anagram(char text1[], char text2[]){
    int i=0;
    frequency(text1, jumlah1);
    frequency(text2, jumlah2);
    while(i<30){
        if(jumlah1[i]==jumlah2[i]){
            return 1;
        }else{
            return 0;
        }
        i++;
    }
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
