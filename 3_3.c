#include <stdio.h>
#include <stdlib.h>

int main() {
    int **matrix;
    int *result;
    int rows, cols;
    int i, j, count;

    printf("Введите количество строк: ");
    scanf("%d", &rows);
    printf("Введите количество столбцов: ");
    scanf("%d", &cols);

    matrix = (int**)malloc(rows * sizeof(int*));
    for(i = 0; i < rows; i++) {
        matrix[i] = (int*)malloc(cols * sizeof(int));
    }

    result = (int*)malloc(cols * sizeof(int));

    printf("Введите элементы матрицы:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for(j = 0; j < cols; j++) {
        count = 0;
        for(i = 0; i < rows; i++) {
            if(matrix[i][j] < 0) {
                count++;
            }
        }
        result[j] = count;
    }

    printf("Массив с количеством отрицательных элементов по столбцам:\n");
    for(j = 0; j < cols; j++) {
        printf("%d ", result[j]);
    }
    printf("\n");

    for(i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);
    free(result);

    return 0;
}
