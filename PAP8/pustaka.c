#include "pustaka.h"

/*
    Nama     = Bayu Grafit Nur Alfian
    Kelompok = A11.4207
    NIM      = A11.2017.10284
    this file created, updated, and saved on code blocks linux
*/

int min2(int num1, int num2){
    int nilai;
    if(num1<num2){
        return nilai=num1;
    }else{
        return nilai=num2;
    }
}

int max2(int num1, int num2){
    int nilai;
    if(num1>num2){
        return nilai=num1;
    }else{
        return nilai=num2;
    }
}

int rec_max(int data[], int cur, int arrSize){
    if(cur==arrSize-1){
        return data[cur];
    }else{
        return max2(data[cur], rec_max(data,cur+1,arrSize));
    }
}

int rec_min(int data[], int cur, int arrSize){
    if(cur==arrSize-1){
        return data[cur];
    }else{
        return min2(data[cur], rec_min(data,cur+1,arrSize));
    }
}

void rec_print_all(int data[], int cur, int arrSize){
    if(cur==arrSize){
        return data[cur];
    }else{
        printf("%d ", data[cur]);
        return rec_print_all(data,cur+1,arrSize);
    }
}

float rec_mean(int data[], int cur, int arrSize){
    if(cur==0){
        return ((data[cur]+rec_mean(data,cur+1,arrSize))/arrSize);
    }else if(cur==arrSize-1){
        return data[cur];
    }else{
        return (data[cur] + rec_mean(data,cur+1,arrSize));
    }
}

int balik(int *num1, int *num2){
    int temp=*num1;
    *num1=*num2;
    *num2=temp;
}

void rec_selection_sort(int data[], int arrSize){
    if (arrSize==0){
        return data[arrSize-1];
    }else{
        int pos= inner_rec(data,arrSize-1,arrSize);
        balik(&data[pos],&data[arrSize-1]);
        return rec_selection_sort(data,arrSize-1);
    }
}

int inner_rec(int data[], int cur, int arrSize){
    if (data[arrSize-1]<data[cur]){
        return cur= arrSize;
    }else{
        return inner_rec(data,cur,arrSize-1);
    }
}
