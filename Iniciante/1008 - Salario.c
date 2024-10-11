#include <stdio.h>

int main() {

    int numero,dinheiro;
    float valor,calc;
    scanf("%d",&numero);
    scanf("%d",&dinheiro);
    scanf("%f",&valor);

    calc=dinheiro*valor;

    printf("NUMBER = %d\n",numero);
    printf("SALARY = U$ %.2f\n",calc);

    return 0;
}