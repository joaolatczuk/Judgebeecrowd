#include <stdio.h>

int main() {

    double x,area;
    double pi=3.14159;
    scanf("%lf",&x);

    area=pi*(x*x);

    printf("A=%.4lf\n",area);
    return 0;
}