#ifndef PUSTAKA_H_INCLUDED
#define PUSTAKA_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

int min2(int num1, int num2);
int max2(int num1, int num2);
int rec_max(int data[], int cur, int arrSize);
int rec_min(int data[], int cur, int arrSize);
void rec_print_all(int data[], int cur, int arrSize);
float rec_mean(int data[], int cur, int arrSize);
void rec_selection_sort(int data[], int arrSize);

#endif // PUSTAKA_H_INCLUDED
