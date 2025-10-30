#include <stdio.h>

int main(void) {
    double x1, x2, x3, y1, y2, y3;
    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);
    scanf("%lf %lf", &x3, &y3);
    if(x1 == x2 && x2 == x3){
        printf("1.они лежат на прямой паралельно y");
    } else{
        if(y1 == y2 && y2 == y3){
            printf("2.они лежат на прямой паралельно x");
        } else{
            printf("3.они не лежат на одной прямой");
        }
    }
    return 0;
}
