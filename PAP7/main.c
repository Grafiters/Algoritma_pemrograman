#include "pustaka.h"

int hasil;

int main()
{
    printf("masukkan batas 1 = "); scanf("%d", &a);
    printf("masukkan batas 2 = "); scanf("%d", &b);
    hasil=add_rec(a,b);
    printf("%d ", hasil);
    return 0;
}

