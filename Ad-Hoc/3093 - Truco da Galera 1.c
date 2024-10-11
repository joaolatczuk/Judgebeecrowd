#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int x=0;x<n;x++) {
        char frase[1000];
        int Q = 0, J = 0, K = 0, A = 0;
        scanf("%s", frase);
        for (int i = 0; frase[i] != 0; i++) {
            if (frase[i] == 'Q') {
                Q++;
            } else if (frase[i] == 'J') {
                J++;
            } else if (frase[i] == 'K') {
                K++;
            } else if (frase[i] == 'A') {
                A++;
            }
        }
        if (Q > 0 && J > 0 && K > 0 && A > 0) {
            printf("Aaah muleke\n");
        } else {
            printf("Ooo raca viu\n");
        }
    }
}

