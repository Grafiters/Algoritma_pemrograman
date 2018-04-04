#include "pustaka.h"

/**
    Nama     : Bayu Grafit Nur Alfian
    NIM      : A11.2017.10284
    Kelompok : 4207
    Tugas PAP 5 (created, read, and update on linux)
*/

int data[] = {12, 14, 20, 15, 22, 25, 18, 10, 27};
int list1[] = {1, 2, 3, 4, 5};
int list2[] = {5, 4, 3, 2, 1};
int list3[] = {6, 7, 8, 9, 10};
int list4[] = {10, 9, 8, 7, 6};

int list5[] = {9, 12, 43, 13, 15};
int list6[] = {12, 4, 19, 9, 22, 1};

int angka, a, b, hasil;

int main()
{
    cetakarray(data,9);
    puts("");
    printf("iput nilai yang dicari : "); scanf("%d", &angka);
    printf("apakah %d nilai ada pada array %d", angka, sequent_search(angka, data, 9));

    puts("\n");
    cetakarray(list1, 5);
    puts("");
    cetakarray(list2,5);
    hasil=is_inverse(list1,list2,5);
    printf("\nApakah baris 2 meruakan kebalikan dari baris ke 1 ?");
    if (hasil!=0) {
        printf ( "true\n" );
    } else {
        printf ( "false\n" );
    }

    puts("");
    cetakarray(list5,5);
    puts("");
    min_max(list5, 5, &a, &b);
    printf("a = %d b = %d\n", a,b);

    puts("");
    cetakarray(list6, 6);
    puts("");
    printf("Jarak antara nilai terkecil dan terbesar adalah %d\n", min_max_gap(list6, 6));

    puts("");
    hasil=at_least('r', 3,"Larry Page");
    printf("Larry Page");
    if(hasil!=0){
        printf(" => TRUE");
    } else {
        printf(" => FALSE");
    }
    return 0;
}
