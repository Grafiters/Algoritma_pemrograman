#include "pustaka.h"

int a, b, hasil;
int c, d, hail1;
int hasil2;

int data1[]={12, 15, 1, 23, 44, 21, 30};
int main()
{
    printf("masukan angka pertama = "); scanf("%d", &a);
    printf("masukan angka kedua   = "); scanf("%d", &b);
    hasil=min2(a,b);
    printf("nilai terkecil adalah %d ", hasil);

    puts("\n");
    printf("masukan angka pertama = "); scanf("%d", &c);
    printf("masukan angka kedua   = "); scanf("%d", &d);
    hail1=max2(c,d);
    printf("nilai terbesar adalah %d ", hail1);

    puts("\n");
    hasil2=rec_max(data1,0,7);
    printf("nilai terbesar adalah %d", hasil2);
    return 0;
}
