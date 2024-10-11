#include <stdio.h>

int main(){
    int qtd;
    scanf("%d",&qtd);
    for(int i=0;i<qtd;i++) {
        char str[4];
        scanf("%3s",str);
        if (str[0] == str[2]) {
            int mult1, mult2;
            mult1 = str[0] - '0';
            mult2 = str[2] - '0';
            printf("%d\n", mult1 * mult2);
        } else {
            if (str[1] >= 'A' && str[1] <= 'Z') {
                int mult1, mult2;
                mult1 = str[0] - '0';
                mult2 = str[2] - '0';
                printf("%d\n", mult2 - mult1);
            } else {
                int mult1, mult2;
                mult1 = str[0] - '0';
                mult2 = str[2] - '0';
                printf("%d\n", mult2 + mult1);
            }
        }
    }
}