//
// Created by 李宇涵 on 2020/9/14.
//



#include "SORT.h"
void INSERTION_SORT(int * A,int n){
    for(int j=1;j<n;j++){
        int key = A[j];
        int i=j-1;
        while(i>=0&&A[i]>key){
            A[i+1]=A[i];
            i--;
        }
        A[i+1]=key;
    }
}







