#include <stdio.h>

int main() {
    float D[7][9];
    float sum[7], tempSum;
    float tempRow[9];
    int i, j, k;

    printf("Введите элементы матрицы 7x9:\n");
    for(i = 0; i < 7; i++) {
        for(j = 0; j < 9; j++) {
            scanf("%f", &D[i][j]);
        }
    }

    for(i = 0; i < 7; i++) {
        sum[i] = 0;
        for(j = 0; j < 9; j++) {
            sum[i] += D[i][j];
        }
    }

    for(i = 0; i < 6; i++) {
        for(j = 0; j < 6 - i; j++) {
            if(sum[j] > sum[j+1]) {
                tempSum = sum[j];
                sum[j] = sum[j+1];
                sum[j+1] = tempSum;

                for(k = 0; k < 9; k++) {
                    tempRow[k] = D[j][k];
                    D[j][k] = D[j+1][k];
                    D[j+1][k] = tempRow[k];
                }
            }
        }
    }

    printf("Отсортированная матрица:\n");
    for(i = 0; i < 7; i++) {
        for(j = 0; j < 9; j++) {
            printf("%.2f ", D[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < 7; i++) {
        printf("Строка %d: %.2f\n", i, sum[i]);
    }

    return 0;
}
