#include <stdio.h>
#include "第二章/SORT.h"
int main() {

    int A[] = {10,9,8,7,6,5,4,3,2,1};

    for(int i=0;i<10;i++){
        printf("%d\t",A[i]);
    }
    putchar('\n');
    INSERTION_SORT(A,10);
    for(int i=0;i<10;i++){
        printf("%d\t",A[i]);
    }

    return 0;
}
