#include <stdio.h>

int main() {
    for (int fim=0;fim==0;) {
        int l, r;
        scanf("%d %d",&l,&r);
        if (l == 0 && r == 0) {
            fim = 1;
        } else {
            int soma = l + r;
            printf("%d\n",soma);
        }
    }
    return 0;
}