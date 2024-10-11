#include <stdio.h>

int main() {
    int a,b,c;
    while(scanf("%d %d %d",&a,&b,&c)!=EOF) {
        int um = 0, zero = 0;
        if (a == 1) {
            um++;
        } else {
            zero++;
        }

        if (b == 1) {
            um++;
        } else {
            zero++;
        }

        if (c == 1) {
            um++;
        } else {
            zero++;
        }

        if (um == 0 || zero == 0) {
            printf("*\n");
        } else {

            if (um > zero) {
                if (a == 0) {
                    printf("A\n");
                } else {
                    if (b == 0) {
                        printf("B\n");
                    }
                    if (c == 0) {
                        printf("C\n");
                    }
                }
            } else {
                if (a == 1) {
                    printf("A\n");
                } else {
                    if (b == 1) {
                        printf("B\n");
                    }
                    if (c == 1) {
                        printf("C\n");
                    }
                }
            }
        }
    }
    return 0;
}