#include <stdio.h>

int main(void) {
    int m, n;
    scanf("%d", &m);
    scanf("%d", &n);
    double param_func = (m > 0 && n > 0)?(n - 4):((m != 0 && n != 0)?((m + n)/(m * n)):(m + 5));
    printf("%f", param_func);
    return 0;
}
