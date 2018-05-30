#include "pustaka.h"

int a=5, b=6;
int *arr1;

int main()
{
    /*===== Tugas 1 =====*/
    printf("a=%d, b=%d", a,b);
    swapValue(&a, &b);
    printf(" -> a=%d, b=%d", a, b);

    puts("\n");
    /*===== Tugas 2 =====*/
    printf("a=%d, b=%d", a,b);
    changeValue(&a,5,6);
    printf(" -> %d", a);

    /*===== Tugas 3 =====*/
    arr1 = malloc(sizeof(int)*6);
    initDynarray(arr1,6);

    puts("\n");
    /*===== Tugas 4 =====*/
    printArray(arr1,6);

    puts("\n");
    /*===== Tugas 5 =====*/
    float c;
    putAverage(&c, arr1, 6);
    printf("c => %f", c);
    return 0;
}
