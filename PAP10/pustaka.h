#ifndef PUSTAKA_H_INCLUDED
#define PUSTAKA_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

void swapValue(int *num1, int *num2);
void changeValue(int *target, int num1, int num2);
void initDynarray(int *arrData, int Size);
void printArray(int *arrData, int Size);
void putAverage(float *avg, int *arrData, int Size);

#endif // PUSTAKA_H_INCLUDED
