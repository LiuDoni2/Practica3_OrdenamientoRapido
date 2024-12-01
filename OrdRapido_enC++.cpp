#include <iostream>
#include <vector>
using namespace std;

int particionar(vector<int>& lista, int bajo, int alto) {
    int pivote = lista[alto]; 
    int i = bajo - 1;

    for (int j = bajo; j < alto; j++) {
        if (lista[j] < pivote) {
            i++;
            swap(lista[i], lista[j]); 
        }
    }

    swap(lista[i + 1], lista[alto]); 
    return i + 1; 
}

void quickSort(vector<int>& lista, int bajo, int alto) {
    if (bajo < alto) {
        int pivote = particionar(lista, bajo, alto); 
        quickSort(lista, bajo, pivote - 1);  
        quickSort(lista, pivote + 1, alto);  
    }
}

int main() {
    int n;
    cout << "¿Cuántos números quieres ingresar? ";
    cin >> n;

    if (n <= 0) {
        cout << "Ingresa un número mayor que 0." << endl;
        return 1;
    }

    vector<int> lista(n); 
    for (int i = 0; i < n; i++) {
        cout << "Ingresa el número " << (i + 1) << ": ";
        cin >> lista[i]; 
    }

    cout << "Lista original: ";
    for (int num : lista)
        cout << num << " "; 
    cout << endl;

    quickSort(lista, 0, n - 1); 

    cout << "Lista ordenada: ";
    for (int num : lista)
        cout << num << " "; 
    cout << endl;

    return 0;
}
