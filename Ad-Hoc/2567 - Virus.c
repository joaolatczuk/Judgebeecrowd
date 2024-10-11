#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void ordenarBur(int A[], int tam) {
    bool cambio;
    int i, aux;
    do {
        cambio = false;
        for (i = 0; i < tam - 1; i++) {
            if (A[i] > A[i + 1]) {
                aux = A[i];
                A[i] = A[i + 1];
                A[i + 1] = aux;
                cambio = true;
            }
        }
    } while (cambio);
}

int main() {
    int n, i, suma, d;
    int v[1000];

    while (scanf("%d", &n) != EOF) {
        for (i = 0; i < n; i++) {
            scanf("%d", &v[i]);
        }

        ordenarBur(v, n);

        suma = 0;

        for (i = 0, d = n - 1; i < d; i++, d--) {
            suma += abs(v[i] - v[d]);
        }

        printf("%d\n", suma);
    }

    return 0;
}
