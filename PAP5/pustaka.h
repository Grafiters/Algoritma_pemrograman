#ifndef PUSTAKA_H_INCLUDED
#define PUSTAKA_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

int sequent_search(int angka, int data[], int jml_data);
int is_inverse(int list1[], int list2[], int jml_data);
int min_max_gap(int data[], int jml_data);
int at_least(char huruf, int jml, char teks[]);
char temp[];

void min_max(int data[], int jml_data, int *min, int *max);
void cetakarray(int data[],int panjang);

#endif // PUSTAKA_H_INCLUDED
