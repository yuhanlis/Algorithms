#include <stdio.h>
#include "第二章/SORT.h"
int main() {

    int A[] = {5,2,4,6,1,3};

    for(int i=0;i<6;i++){
        printf("%d\t",A[i]);
    }
    putchar('\n');
    //INSERTION_SORT(A,6);
    MERGE_SORT(A,0,6);
    for(int i=0;i<6;i++){
        printf("%d\t",A[i]);
    }

    return 0;
    
}


