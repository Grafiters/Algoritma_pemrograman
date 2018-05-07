#include "pustaka.h"

/**
   Nama     = Bayu Grafit Nur Alfian
   NIM      = A11.2017.10284
   Kelompok = A11.4207
   Created and edited on code block linux ubuntu budgie
*/

int add_rec(int num1, int num2){
    if(num2==0){
        return num1;
    } else {
        return 1 + add_rec(num1,num2-1);
    }
}

int sub_rec(int num3, int num4){
    if(num4 == 0){
        return num3;
    }else {
        return -1 + sub_rec(num3,num4-1);
    }
}

int mul_rect(int num1, int num2){
    if(num2==1){
        printf("+ %d ", num1);
        return num1;
    }else{
        printf("+ %d ", num1);
        return num1 + mul_rect(num1, num2-1);
    }
}

int div_rec(int num1, int num2){
    if(num1/num2>1){
        printf("- %d ", num2);
        return div_rec(num1-num2, num2)+1;
    }else{
        printf("- %d ", num2);
        return 1;
    }
}

int pow_rec(int num1, int num2){
    if(num2==1){
        printf("* %d ", num1);
        return num1;
    }else{
        printf("* %d ", num1);
        return num1 * pow_rec(num1, num2-1);
    }
}

int factorial(int number){
    if(number==1){
        printf("* %d ", number);
        return number;
    }else{
        printf("* %d ", number);
        return number * factorial(number - 1);
    }
}

int fibo(int n1, int n2,int i, int n){
    if(i==n){
        return ;
    }else{
        printf("%d ", n1+n2);
        return fibo(n1+n2, n1, i+1, n);
    }
}

void fibonacci(int number){
    if(number>0){
        printf("%d ", 1);
        fibo(1,0,1,number);
    }
}

int sum_traversal(int data[], int cur){
    if(cur==0){
        return cur;
    }else{
        return data[cur-1]+sum_traversal(data, cur-1);
    }
}

void cetak(int n){
    if(n==1){
        printf("%d ", n);
    } else {
        printf("%d ", n);
        cetak(n-1);
    }
}
