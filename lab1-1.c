#include <stdio.h>
#include <math.h>

int main(void)
{
    double x,y;
    scanf("%lf", &x);
    scanf("%lf", &y);
    double a = ((sin(x) * cos(y) - tan(x/y)) / log(4 * pow(y, 3))) * exp(-1.0 * x);
    printf("%f", a);

    return 0;
}