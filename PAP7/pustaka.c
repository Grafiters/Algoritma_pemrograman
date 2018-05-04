#include "pustaka.h"

int add_rec(int num1, int num2){
    if(num2==0){
        return num1;
    } else {
        return 1 + add_rec(num1,num2-1);
    }
}
