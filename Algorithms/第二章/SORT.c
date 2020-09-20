#include "SORT.h"

#include <stdlib.h>

/**
 * 
 * 插入排序
 * */

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


/**
 * 归并排序
 * 
 **/
void MERGE(int*A,int p,int q,int r){
    int n1=q-p;
    int n2=r-p;
    int *L = (int*)malloc((n1+1)*sizeof(int));
    int *R=  (int*)malloc((n2+1)*sizeof(int));
    for(int i=0;i<n1;i++){
        L[i]=A[p+i];
    }
    for(int i=0;i<n2;i++){
        R[i]=A[q+i];
    }
    L[n1]=99999;
    R[n2]=99999;
    int i=0,j=0;
    for(int k=p;k<r;k++){
        if(L[i]<=R[j]){
            A[k]=L[i];
            i=i+1;
        }else{
            A[k]=R[j];
            j=j+1;
        }
    }
    
}
void MERGE_SORT(int *A,int p,int r){

        int q=(p+r)/2;
        if(p!=q) {      //分治
            MERGE_SORT(A, p, q);
            MERGE_SORT(A, q, r);
        }
        MERGE(A,p,q,r);

}


/**
 * 
 *  冒泡排序
 * 
 * */
void BUBBLE_SORT(int *A,int n){
    for(int i=1;i<n;i++){
        for(int j=1;j<n;j++){
            int temp;
            if(A[j-1]>A[j]){
                temp=A[j-1];
                A[j-1]=A[j];
                A[j]=temp;
            }
        }
    }
}


