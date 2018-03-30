#include "pustaka.h"

int data[] = {12, 14, 20, 15, 22, 25, 18, 10, 27};
int angka;

int main()
{
    cetakarray(data,9);
    puts("");
    printf("iput nilai yang dicari : "); scanf("%d", &angka);
    printf("apakah %d nilai ada pada array %d", angka, sequent_search(angka, data, 9));
    return 0;
}
