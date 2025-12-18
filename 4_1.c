#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 20

void findZeroSquare(int A[][MAX], int m, int n, int k) {
    if (k > m || k > n) {
        printf("Квадрат слишком большой.\n");
        return;
    }

    int found = 0;

    for (int i = 0; i <= m - k; i++) {
        for (int j = 0; j <= n - k; j++) {
            int isZeroSquare = 1;

            for (int x = i; x < i + k; x++) {
                for (int y = j; y < j + k; y++) {
                    if (A[x][y] != 0) {
                        isZeroSquare = 0;
                        break;
                    }
                }
                if (!isZeroSquare) break;
            }

            if (isZeroSquare) {
                printf("Найден квадрат %dx%d с позиции (%d, %d)\n", k, k, i, j);
                found = 1;
            }
        }
    }

    if (!found) {
        printf("Квадрат %dx%d из нулей не найден.\n", k, k);
    }
}

int main() {
    int m = 8, n = 8, k = 3;
    int A[MAX][MAX];

    srand(42);

    printf("Матрица A (8x8):\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            A[i][j] = rand() % 2;
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    findZeroSquare(A, m, n, k);

    printf("\n--- Тест 1: Краевой случай ---\n");
    int B[4][MAX] = {
        {1,1,1,1},
        {1,0,0,1},
        {1,0,0,1},
        {1,1,1,1}
    };
    printf("Матрица B с квадратом 2x2 из нулей в центре:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
    findZeroSquare(B, 4, 4, 2);

    return 0;
}