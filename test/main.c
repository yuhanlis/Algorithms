#include <stdio.h>
#include "SORT.h"
int main() {

    int A[] = {10,9,8,7,6,5,4,3,2,1};
    for(int i=0;i<10;i++){
        printf("%d\n",A[i]);
    }
    INSERTION_SORT(A,10);
    for(int i=0;i<10;i++){
        printf("%d\n",A[i]);
    }
    return 0;
}
