#include <stdio.h>

int main() {
    int A[30], B[15];
    int i, j, found;

    for(i = 0; i < 30; i++) {
        scanf("%d", &A[i]);
    }

    for(i = 0; i < 15; i++) {
        scanf("%d", &B[i]);
    }

    for(i = 0; i < 30; i++) {
        found = 0;
        for(j = 0; j < 15; j++) {
            if(A[i] == B[j]) {
                found = 1;
                break;
            }
        }
        if(found == 0) {
            printf("Элемент %d на позиции %d\n", A[i], i);
        }
    }

    return 0;
}