#include "header.h"

int len_text()
{
    char nama[20];

    printf("input teks : "); gets(&nama);

    printf("jumlahnya adalah %i", strlen(nama));
}
