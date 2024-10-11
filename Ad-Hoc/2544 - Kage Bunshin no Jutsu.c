#include <stdio.h>
#include <math.h>

int log2_int(int N) {
    return (int)(log(N) / log(2));
}

int main() {
    int N;
    while (scanf("%d", &N) != EOF) {
        printf("%d\n", log2_int(N));
    }
    return 0;
}
