#include <stdio.h>
#include <math.h>
int main() {
    double epsilon = 1e-5;
    int points = 21;
    for (int i = 0; i < points; i++) {
        double x = -1.0 + i * (2.0 / (points - 1));
        double sum = 0.0;
        double term = x;
        int n = 1;
        do {
            sum += term;
            n++;
            term = term * (-1) * x * x / ((2*n-1) * (2*n-2));
        } while (fabs(term) > epsilon);
            printf("%.2f %.6f\n", x, sum);
    }
    return 0;
}
