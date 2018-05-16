#ifndef PUSTAKA_H_INCLUDED
#define PUSTAKA_H_INCLUDED

/*
    Nama     = Bayu Grafit Nur Alfian
    Kelompok = A11.4207
    NIM      = A11.2017.10284
    this file created, updated, and saved on code blocks linux
*/

#include <stdio.h>
#include <stdlib.h>

int min2(int num1, int num2);
int max2(int num1, int num2);
int rec_max(int data[], int cur, int arrSize);
int rec_min(int data[], int cur, int arrSize);

void rec_print_all(int data[], int cur, int arrSize);

float rec_mean(int data[], int cur, int arrSize);

void rec_selection_sort(int data[], int arrSize);
int inner_rec(int data[], int cur, int arrSize);
int balik(int *num1, int *num2);

#endif // PUSTAKA_H_INCLUDED
