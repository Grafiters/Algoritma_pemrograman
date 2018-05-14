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
