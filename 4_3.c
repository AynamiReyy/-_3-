#include <stdio.h>
#include <math.h>

double Integral(double (*f)(double), double a, double b, int N) {
    double h = (b - a) / N;
    double sum = (f(a) + f(b)) / 2.0;
    for (int i = 1; i < N; i++) {
        sum += f(a + i * h);
    }
    return sum * h;
}

double f1(double x) {
    return sqrt(1 + x + x * x);
}

double f2(double x) {
    return x * sin(x);
}

int main() {
    double a1 = -2.0, b1 = 2.0;
    double a2 = 0.5, b2 = 4.0;
    int N = 35;

    double result1 = Integral(f1, a1, b1, N);
    double result2 = Integral(f2, a2, b2, N);

    printf("∫[-2;2] sqrt(1 + x + x^2) dx ≈ %.6f\n", result1);
    printf("∫[0.5;4] x * sin(x) dx      ≈ %.6f\n", result2);

    printf("\n--- Тест 3: Проверка на константе ---\n");
    double test_f(double x) { return 5.0; }
    double test_res = Integral(test_f, 0, 10, 100);
    printf("∫[0;10] 5 dx = %.2f (ожидается 50.00)\n", test_res);

    return 0;
}