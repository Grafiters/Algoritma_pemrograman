#include "pustaka.h"

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
        return min2(data[cur], rec_max(data,cur+1,arrSize));
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
    int hasil;
    if(cur==arrSize){
        return hasil/arrSize;
    }else{
        return hasil += data[cur], rec_mean(data,cur+1,arrSize);
    }
}

void rec_selection_sort(int data[], int arrSize){
    int index, temp;
    if()
}
