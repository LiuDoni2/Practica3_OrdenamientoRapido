#include <stdio.h>
#include <stdlib.h>

int particionar(int lista[], int bajo, int alto) {
    int pivote = lista[alto]; 
    int i = bajo - 1;

    for (int j = bajo; j < alto; j++) {
        if (lista[j] < pivote) {
            i++;
            int temp = lista[i];
            lista[i] = lista[j];
            lista[j] = temp;
        }
    }
    int temp = lista[i + 1];
    lista[i + 1] = lista[alto];
    lista[alto] = temp;
    
    return i + 1; 
}

void quickSort(int lista[], int bajo, int alto) {
    if (bajo < alto) {
        int pivote = particionar(lista, bajo, alto); 
        quickSort(lista, bajo, pivote - 1);  
        quickSort(lista, pivote + 1, alto);  
    }
}

int main() {
    int n;
    printf("¿Cuántos números quieres ingresar? ");
    scanf("%d", &n); 

    if (n <= 0) {
        printf("Por favor, ingresa un número mayor que 0.\n");
        return 1; 
    }
    
    int *lista = (int *)malloc(n * sizeof(int)); 
    for (int i = 0; i < n; i++) {
        printf("Ingresa el número en la posición %d: ", i + 1);
        scanf("%d", &lista[i]); 
    }

    printf("Lista original: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", lista[i]); 
    }
    printf("\n");

    quickSort(lista, 0, n - 1); 

    printf("Lista ordenada: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", lista[i]); 
    }
    printf("\n");

    free(lista); 
    return 0; 
}
