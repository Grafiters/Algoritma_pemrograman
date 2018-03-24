#include "pustaka.h"

int arr1[] = { 3, 5, 38, 0, 44, 47 };
int arr2[] = { 3, 0, 44, 38, 0, 5, 47 };
int arr3[] = { 10, 5, 21, 30, 27 };
int arr4[] = { 15, 24, 32, 20, 30 };

int main()
{
    puts("====== Tugas 1 Compress Array ======");
    compress_array(arr1, 6);
    puts("");
    compress_array(arr2,7);
    puts("\n");
    puts("====== Tugas 2 Selection Short 1 ======");
    selection_short1(arr3,5);
    puts("\n");
    puts("====== Tugas 3 Selection Short 2 ======");
    selection_short2(arr4, 5);
    puts("\n");
    puts("====== Tuags 4 Get Median ======");
    cetak_array(arr4, 5);
    get_median(arr4,5);
    return 0;
}
