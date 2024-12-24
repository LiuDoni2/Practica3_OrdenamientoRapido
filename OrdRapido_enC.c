#include <stdio.h>

void quick_sort(int lista[], int izq, int der) {
    if (izq < der) {
        int pivote = lista[der], i = izq - 1, temp;
        for (int j = izq; j < der; j++) {
            if (lista[j] < pivote) {
                temp = lista[++i];
                lista[i] = lista[j];
                lista[j] = temp;
            }
        }
        temp = lista[i + 1];
        lista[i + 1] = lista[der];
        lista[der] = temp;
        quick_sort(lista, izq, i);
        quick_sort(lista, i + 2, der);
    }
}

int main() {
    int lista[] = {6, 3, 8, 1, 5}, n = 5;
    quick_sort(lista, 0, n - 1);
    for (int i = 0; i < n; i++) printf("%d ", lista[i]);
    printf("\n");
    return 0;
}
