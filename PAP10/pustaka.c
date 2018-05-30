#include "pustaka.h"

void swapValue(int *num1, int *num2){
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

void changeValue(int *target, int num1, int num2){
    *target = num1+num2;
}

void initDynarray(int *arrData, int Size){
    int i=0;
    while(i<Size){
        arrData[i]=i+1;
        i++;
    }
}

void printArray(int *arrData, int Size){
    int i=0;
    while(i<Size){
        printf("%d ", arrData[i]);
        i++;
    }
}

void putAverage(float *avg, int *arrData, int Size){
    static int i=0;
    if(i<Size){
        *avg += arrData[i];
        i++;
        putAverage(avg,arrData,Size);
    }else{
        *avg = *avg / Size;
    }
}
