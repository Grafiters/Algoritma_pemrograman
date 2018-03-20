#include "header.h"

int is_kabisat(int years){
    int kabisat;

    if (years%2==0){
        kabisat= 1;
    }else{
        kabisat= 0;
    }
    printf("tahun tersebut adalah tahun %d", kabisat);
}
