#include "pustaka.h"

int a, b, hasil;
int c, d, hail1;
int hasil2;

int data1[]={12, 15, 23, 44, 21, 30};
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
    hasil2=rec_max(data1,0,6);
    printf("nilai terbesar adalah %d", hasil2);

    puts("\n");
    printf("nilai terkecil adalah %d ", rec_min(data1,0,6));

    puts("\n");
    rec_print_all(data1,0,6);

    puts("\n");
    printf("mean dari data diatas adalah %d ", rec_mean(data1,0,6));

    return 0;
}
