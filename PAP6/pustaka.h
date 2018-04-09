#ifndef PUSTAKA_H_INCLUDED
#define PUSTAKA_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

/**
    Nama     : Bayu Grafit Nur Alfian
    NIM      : A11.2017.10284
    Kelompok : 4207
    Tugas PAP 5 (created, read, and update on linux)
*/

int binarysearch(int angka, int data[], int jml_data);
int search_word(char whord[], char text[]);
int is_anagram(char text1[], char text2[]);

void frequency(char text[], int jml[]);
void BubbleShort(int data[], int jml_data);
void inputarray(int data[], int jml_data);
void cetakarray(int data[], int jml_data);

int jumlah1[];
int jumlah2[];
#endif // PUSTAKA_H_INCLUDED
