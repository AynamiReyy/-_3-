#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 20

void findColumnsWithTwoNegatives(int M[][MAX], int rows, int cols, char name) {
    int found = 0;
    for (int j = 0; j < cols; j++) {
        int count = 0;
        for (int i = 0; i < rows; i++) {
            if (M[i][j] < 0) count++;
        }
        if (count == 2) {
            printf("Матрица %c: столбец %d имеет 2 отрицательных элемента\n", name, j);
            found = 1;
        }
    }
    if (!found) {
        printf("Матрица %c: нет столбцов с 2 отрицательными элементами\n", name);
    }
}

int main() {
    int B[5][MAX], C[7][MAX];
    int mB = 5, nB = 7;
    int mC = 7, nC = 5;

    srand(123);

    printf("Матрица B (5x7):\n");
    for (int i = 0; i < mB; i++) {
        for (int j = 0; j < nB; j++) {
            B[i][j] = rand() % 21 - 10;
            printf("%3d ", B[i][j]);
        }
        printf("\n");
    }
    findColumnsWithTwoNegatives(B, mB, nB, 'B');

    printf("\nМатрица C (7x5):\n");
    for (int i = 0; i < mC; i++) {
        for (int j = 0; j < nC; j++) {
            C[i][j] = rand() % 21 - 10;
            printf("%3d ", C[i][j]);
        }
        printf("\n");
    }
    findColumnsWithTwoNegatives(C, mC, nC, 'C');

    printf("\n--- Тест 2: Контрольный пример ---\n");
    int Test[3][MAX] = {
        { 1, -2,  3},
        {-4,  5, -6},
        { 7, -8,  9}
    };
    printf("Тестовая матрица 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%3d ", Test[i][j]);
        }
        printf("\n");
    }
    findColumnsWithTwoNegatives(Test, 3, 3, 'T');

    return 0;
}