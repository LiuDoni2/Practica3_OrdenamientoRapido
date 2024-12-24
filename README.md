<p align="center"> 
<a href="https://github.com/LiuDoni2"><img src="http://readme-typing-svg.herokuapp.com?font=mono&size=17&duration=4000&color=F7B11B&center=falso&vCenter=falso&lines=Algoritmo+de+Ordenamiento+QuickSort;Gracias+por+visitarme:).+劉ī.am/𝕷𝖎̈́𝖚̈́⋆𝕯̈́𝖔̈́𝖓̈́𝖎̈́፨刘" height="90px"></a> 
</p>

<p align="center">
<img src="https://i.imgur.com/xOn3TKn.gif" alt="Animación del Algoritmo de Ordenamiento Burbuja" width="600"/>
</p>

### 📍 Atajos del README
| TEMA | DESCRIPCIÓN | ATAJO |
|------|-------------|-------|
| 📚 **Introducción** | *Descripción del algoritmo* | [ver](#-que-es-el-algoritmo-de-ordenamiento-rapido) |
| 💻 **C++** | *Implementación en C++* | [ver](#c) |
| 💻 **C** | *Implementación en C* | [ver](#c-1) |
| 📜 **Pseudocódigo** | *Implementación en Pseudocódigo* | [ver](#pseudocódigo-pseint) |
| 🐍 **Python** | *Implementación en Python* | [ver](#python) |
| ❓ **Conclusión** | *Reflexiones finales* | [ver](#conclusión) |

----

## ❓ ¿Qué es el Algoritmo de Ordenamiento Rapido?

El ALgoritmo de Ordenamiento Rapido o tambien llamado **algoritmo QuickSort** es un método de ordenamiento eficiente que utiliza la estrategia "dividir y conquistar". Es uno de los algoritmos más utilizados en la práctica debido a su rendimiento promedio excepcional y su eficiencia en diferentes tipos de datos.

## ¿Cómo funciona?

El nombre "QuickSort" (ordenamiento rápido) se debe a su capacidad para ordenar elementos más rápidamente que muchos otros algoritmos. Funciona seleccionando un elemento "pivote" y reorganizando la lista alrededor de él.

### Pasos del algoritmo:
1. Selecciona un elemento como pivote (generalmente el último o uno aleatorio).
2. Coloca todos los elementos menores que el pivote a su izquierda.
3. Coloca todos los elementos mayores que el pivote a su derecha.
4. Repite el proceso recursivamente para las sublistas izquierda y derecha.

## Ejemplo paso a paso

Imagina que tienes la lista **[6, 3, 8, 1, 5]** y quieres ordenarla en forma ascendente:

### Primera partición:
- Pivote: 5 (último elemento)
- Compara cada elemento con 5:
  - [**3**, **1**, 8, 6, 5] (mueve los menores a la izquierda)
  - [3, 1, 5, **8**, **6**] (el pivote en su posición final)

### Segunda partición (sublista izquierda [3, 1]):
- Pivote: 1
- Resultado: [**1**, 3]

### Segunda partición (sublista derecha [8, 6]):
- Pivote: 6
- Resultado: [6, 8]

### Resultado final:
[1, 3, 5, 6, 8]

## Características del algoritmo

- **Eficiencia:** Su complejidad promedio es O(n log n), lo que lo hace muy eficiente.
- **Recursividad:** Utiliza la recursión para resolver subproblemas más pequeños.
- **In-place:** Puede implementarse para usar memoria adicional mínima.

## Ventajas y Desventajas

### Ventajas:
- Muy eficiente en la práctica
- Buen rendimiento en casos promedio
- Funciona bien con diferentes tipos de datos
- Puede implementarse para usar poca memoria adicional

### Desventajas:
- Implementación más compleja que otros algoritmos básicos
- En el peor caso (raro) puede tener un rendimiento de O(n²)
- La recursión puede consumir memoria del stack

# 💻 Implementaciones en Diferentes Lenguajes

## Algoritmo en C++

``` cpp
#include <iostream>
#include <vector>
using namespace std;

void burbuja(vector<int>& lista) {
    for (int i = 0; i < lista.size(); i++)
        for (int j = 0; j < lista.size() - i - 1; j++)
            if (lista[j] > lista[j + 1])
                swap(lista[j], lista[j + 1]); 
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

    burbuja(lista); 

    cout << "Lista ordenada: ";
    for (int num : lista)
        cout << num << " "; 
    cout << endl;

    return 0;
}
``` 

### 1. **Incluir las librerías necesarias**
- `#include <iostream>`: Esta librería es necesaria para usar las funciones de entrada y salida, como `cin` y `cout`. Permite interactuar con el usuario, como leer datos desde el teclado o imprimir resultados en la consola.
- `#include <vector>`: La librería `vector` nos permite usar un tipo de dato llamado **vector**, que es una estructura de datos dinámica en C++. Un vector es como un arreglo, pero con la ventaja de que su tamaño puede cambiar durante la ejecución del programa.

### 2. **Uso del espacio de nombres `std`**
- `using namespace std;`:
  - Esta línea permite evitar tener que escribir `std::` antes de las funciones o clases estándar de C++, como `cout`, `cin` y `vector`. Esto simplifica el código y lo hace más legible para los principiantes.

### 3. **Definición de la función `burbuja`**
- La función `burbuja` es el corazón del algoritmo de ordenamiento burbuja, que organiza los elementos de un vector en orden ascendente. Utiliza dos bucles anidados para comparar y, si es necesario, intercambiar los elementos adyacentes.

### 4. **Función `main`**
- En la función `main`, se lleva a cabo la interacción con el usuario para ingresar los números a ordenar. Además, se llama a la función `burbuja` para realizar el ordenamiento, y se muestra la lista antes y después de ordenarla.

---

### Conceptos Clave 

### 1. **Vectores en C++**
- Un **vector** es un tipo de dato dinámico que puede almacenar una lista de elementos. Su tamaño puede cambiar durante la ejecución del programa.
- Los vectores son más flexibles que los arreglos tradicionales, y son una opción recomendada cuando no sabemos el tamaño exacto de los datos con los que vamos a trabajar.

### 2. **Paso por Referencia**
- Al usar el símbolo `&` en el parámetro de la función (`vector<int>& lista`), estamos pasando la referencia al vector. Esto significa que cualquier cambio que hagamos dentro de la función afectará al vector original que se pasó al llamar la función.

### 3. **Intercambio de Valores**
- La función `swap()` intercambia dos valores. En este caso, intercambiamos elementos en el vector si están en el orden incorrecto.

### 4. **Ciclos (Bucles)**
- El ciclo `for` es una estructura de control que permite repetir un bloque de código varias veces. El bucle `for` en el código es utilizado tanto para leer los números como para ordenar la lista.

---

### Ventajas y Limitaciones de la Implementación

### Ventajas:
- **Interactividad:** Permite al usuario ingresar los datos que quiere ordenar.
- **Simplicidad:** Es fácil de entender y modificar para principiantes.
- **Uso de estructuras modernas de C++:** El código aprovecha vectores y funciones estándar que simplifican su implementación.

### Limitaciones:
- **Complejidad:** La complejidad del algoritmo burbuja es \(O(n^2)\), lo que lo hace lento para listas grandes.
- **Faltan optimizaciones:** Se podrían agregar mejoras, como una verificación para detener el algoritmo si la lista ya está ordenada, lo que reduciría el tiempo de ejecución en algunos casos.

## Algoritmo en C

```c
#include <stdio.h>

// Función principal de QuickSort
void quick_sort(int lista[], int izq, int der) {
    if (izq < der) {
        // Elegimos el pivote (último elemento)
        int pivote = lista[der];
        int i = izq - 1;
        int temp;

        // Reorganizamos los elementos alrededor del pivote
        for (int j = izq; j < der; j++) {
            if (lista[j] < pivote) {
                i++;
                // Intercambiamos elementos
                temp = lista[i];
                lista[i] = lista[j];
                lista[j] = temp;
            }
        }

        // Colocamos el pivote en su posición final
        temp = lista[i + 1];
        lista[i + 1] = lista[der];
        lista[der] = temp;

        // Llamadas recursivas para las sublistas
        quick_sort(lista, izq, i);         // Sublista izquierda
        quick_sort(lista, i + 2, der);     // Sublista derecha
    }
}

// Función principal para probar el algoritmo
int main() {
    int lista[] = {6, 3, 8, 1, 5};
    int n = 5;  // Tamaño de la lista

    // Llamamos a QuickSort
    quick_sort(lista, 0, n - 1);

    // Imprimimos la lista ordenada
    for (int i = 0; i < n; i++) {
        printf("%d ", lista[i]);
    }
    printf("\n");

    return 0;
}
```

### Explicación del código

#### 1. Función `quick_sort`
Esta es la función principal que implementa el algoritmo QuickSort. Recibe tres parámetros:
- `lista[]`: El arreglo a ordenar
- `izq`: Índice izquierdo del segmento actual
- `der`: Índice derecho del segmento actual

#### 2. Selección del pivote
```c
int pivote = lista[der];
```
Elegimos el último elemento como pivote. Esta es una implementación simple, aunque existen otras estrategias para seleccionar el pivote.

#### 3. Partición
```c
for (int j = izq; j < der; j++) {
    if (lista[j] < pivote) {
        i++;
        temp = lista[i];
        lista[i] = lista[j];
        lista[j] = temp;
    }
}
```
Este bucle reorganiza los elementos:
- Los menores que el pivote van a la izquierda
- Los mayores que el pivote van a la derecha

#### 4. Colocación del pivote
```c
temp = lista[i + 1];
lista[i + 1] = lista[der];
lista[der] = temp;
```
Colocamos el pivote en su posición final, entre los elementos menores y mayores.

#### 5. Llamadas recursivas
```c
quick_sort(lista, izq, i);
quick_sort(lista, i + 2, der);
```
Ordenamos recursivamente las sublistas izquierda y derecha.

### Ejemplo de uso

```c
int main() {
    int lista[] = {6, 3, 8, 1, 5};
    int n = 5;
    
    printf("Lista original: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", lista[i]);
    }
    
    quick_sort(lista, 0, n - 1);
    
    printf("\nLista ordenada: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", lista[i]);
    }
    printf("\n");
    
    return 0;
}
```

### Salida esperada
```
Lista original: 6 3 8 1 5
Lista ordenada: 1 3 5 6 8
```

## Conclusión

QuickSort es un algoritmo de ordenamiento eficiente y versátil que, a pesar de su complejidad conceptual, ofrece un excelente rendimiento en la práctica. Su implementación en C demuestra cómo un algoritmo aparentemente complejo puede implementarse de manera relativamente concisa y eficiente.

## Pseudocódigo (Pseint)

``` psc
Algoritmo OrdenamientoBurbuja
	Dimensionar lista(5)
	Para i<-1 Hasta 5 Hacer
		Escribir 'Ingresa el número en la posición ', i, ': '
		Leer lista[i]
	FinPara
	Escribir 'Lista original:', lista[1], ',', lista[2], ',', lista[3], ',', lista[4], ',', lista[5]
	OrdenarBurbuja(lista,5)
	Escribir 'Lista ordenada:', lista[1], ',', lista[2], ',', lista[3], ',', lista[4], ',', lista[5]
FinAlgoritmo

Función OrdenarBurbuja(lista,n)
	Definir i, j, temp Como Entero
	Para i<-1 Hasta n-1 Hacer
		Para j<-1 Hasta n-i Hacer
			Si lista[j]>lista[j+1] Entonces
				temp <- lista[j]
				lista[j] <- lista[j+1]
				lista[j+1]<-temp
			FinSi
		FinPara
	FinPara
FinFunción
``` 

### 1. **Incluir las instrucciones básicas**
En este pseudocódigo, la estructura general del algoritmo es simple y consiste en solicitar al usuario 5 números, ordenarlos mediante el algoritmo de burbuja, y luego mostrar la lista antes y después del ordenamiento.

#### Definición de la lista
El pseudocódigo comienza con la declaración de una lista de tamaño fijo, en este caso, de 5 elementos. La dimensión de la lista es establecida como una constante en el inicio, lo que limita la flexibilidad, ya que solo se pueden manejar 5 elementos.

#### Solicitar los números al usuario
A continuación, se utiliza un ciclo para solicitar al usuario que ingrese 5 números, uno por uno. La función **`Escribir`** se emplea para mostrar un mensaje indicándole al usuario que ingrese un número en cada posición de la lista. Luego, la función **`Leer`** captura el número ingresado y lo almacena en el arreglo en la posición correspondiente.

#### Mostrar la lista original
Una vez que el usuario ha ingresado todos los números, se muestra la lista tal como fue ingresada, es decir, antes de aplicar cualquier ordenamiento.

#### Ordenar la lista utilizando el algoritmo de burbuja
El algoritmo de burbuja se implementa en la función **`OrdenarBurbuja`**, que toma la lista y su tamaño como parámetros. Esta función realiza el proceso de comparar los elementos adyacentes y, si es necesario, intercambiarlos para que los números más grandes "burbujearán" hacia el final de la lista.

#### Mostrar la lista ordenada
Finalmente, se imprime la lista después de que haya sido ordenada, mostrando los números en el orden correcto según el algoritmo de burbuja.

### 2. **Función `OrdenarBurbuja`**

La función **`OrdenarBurbuja`** implementa el clásico algoritmo de ordenamiento burbuja. Este algoritmo consiste en recorrer el arreglo varias veces y comparar elementos adyacentes, intercambiándolos si están en el orden incorrecto. La función realiza lo siguiente:

- Se definen las variables `i`, `j` y `temp`, donde `i` es el índice del ciclo externo y `j` el índice del ciclo interno que compara los elementos adyacentes.
- Se utiliza una variable temporal `temp` para facilitar el intercambio de los elementos cuando sea necesario.
- El ciclo **externo** recorre el arreglo, y el ciclo **interno** realiza las comparaciones y los intercambios de elementos adyacentes si están fuera de orden.

---

### Conceptos Clave 

### 1. **Algoritmo de Ordenamiento Burbuja**
El algoritmo de **burbuja** es uno de los más sencillos de entender, aunque no es muy eficiente para grandes cantidades de datos. En este algoritmo, los elementos del arreglo se comparan de dos en dos y, si están fuera de orden, se intercambian. Este proceso se repite hasta que la lista está completamente ordenada.

### 2. **Estructura de Ciclos (Bucles)**
El pseudocódigo utiliza ciclos **`Para`** para recorrer las posiciones del arreglo:
- El **bucle externo** se encarga de pasar por todo el arreglo, asegurándose de que cada elemento sea comparado.
- El **bucle interno** compara dos elementos adyacentes y realiza un intercambio si es necesario. Este ciclo es esencial para asegurar que los elementos más grandes se "muevan" hacia el final del arreglo.

### 3. **Intercambio de Elementos**
El intercambio de elementos es una parte clave del algoritmo. Si dos elementos están fuera de orden, el algoritmo los intercambia utilizando una variable temporal **`temp`**. Esto permite que los elementos cambien de posición sin perder sus valores.

### 4. **Entrada y Salida de Datos**
En el pseudocódigo, se utiliza la función **`Escribir`** para mostrar mensajes al usuario y **`Leer`** para capturar los datos ingresados por el usuario. Estas funciones permiten interactuar con el programa, pidiendo al usuario que ingrese los números a ordenar y mostrando los resultados antes y después del ordenamiento.

---

### Ventajas y Limitaciones del Algoritmo

### Ventajas:
- **Simplicidad**: El algoritmo de burbuja es fácil de entender y se puede implementar rápidamente, lo que lo hace adecuado para principiantes en la programación.
- **Visualización clara**: El proceso de comparación e intercambio es sencillo de seguir, lo que ayuda a los estudiantes a comprender cómo funcionan los algoritmos de ordenamiento.

### Limitaciones:
- **Ineficiencia para listas grandes**: El algoritmo de burbuja tiene una **complejidad de tiempo \(O(n^2)\)**, lo que lo hace muy lento cuando se trabaja con listas grandes. A medida que el número de elementos aumenta, el tiempo de ejecución crece exponencialmente.
- **Menos eficiente comparado con otros algoritmos**: Aunque es fácil de entender, el algoritmo de burbuja es más lento que otros algoritmos como el **quicksort** o el **mergesort**, que tienen una complejidad de tiempo mucho más eficiente.

## Python

``` python
def burbuja(lista):
    for i in range(len(lista)):
        for j in range(len(lista) - 1):
            if lista[j] > lista[j + 1]:
                lista[j], lista[j + 1] = lista[j + 1], lista[j]
        print(f"Después de la pasada {i + 1}: {lista}")

print("Ordenamiento Burbuja - Bubble Sort")
n = int(input("Ingrese el numero de elementos: "))
lista = [int(input(f"Ingrese el número en la posición {k + 1}: ")) for k in range(n)]

print("Lista original:", lista)
burbuja(lista)
print("Lista ordenada:", lista)
``` 

### 1. **Iniciar el Algoritmo y Función Principal**
El código en Python implementa el algoritmo de ordenamiento burbuja para ordenar una lista de números ingresados por el usuario. Utiliza ciclos **`for`** para recorrer la lista y realizar las comparaciones entre elementos adyacentes. También se utiliza un indicador de intercambio para optimizar el proceso y salir del ciclo si la lista ya está ordenada.

#### Definición de la función `burbuja`
La función **`burbuja`** toma una lista como entrada y la ordena utilizando el algoritmo de burbuja. Dentro de la función:
- Se recorre la lista con un ciclo **`for`** externo que indica cuántas pasadas se deben hacer sobre la lista. Cada pasada mueve el número más grande de la lista hacia el final.
- Un ciclo **`for`** interno compara elementos adyacentes, y si un elemento es mayor que el siguiente, se realiza el intercambio utilizando la asignación de valores simultánea en Python (esto es equivalente a un "swap").
- La variable **`intercambio`** se establece en `True` si se realiza al menos un intercambio durante la pasada. Si no se realiza ningún intercambio, se rompe el ciclo prematuramente, lo que mejora la eficiencia del algoritmo.

#### Interacción con el usuario
El código solicita al usuario que ingrese el número de elementos que desea ordenar. Luego, pide al usuario que ingrese cada uno de los elementos de la lista utilizando una **list comprehension**, que es una forma compacta de crear la lista. Una vez ingresados los números, el código imprime la lista original antes de aplicar el ordenamiento y muestra el resultado después de haber ordenado los números.

### 2. **Funcionamiento del Algoritmo**

El **algoritmo de burbuja** en Python sigue el mismo principio básico que en otros lenguajes:
1. Compara elementos adyacentes de la lista.
2. Si un elemento es mayor que el siguiente, intercambia sus posiciones.
3. Este proceso se repite varias veces, "burbujando" el valor más grande al final de la lista con cada pasada.

**Optimización con la variable `intercambio`:**
- Al principio de cada pasada, la variable **`intercambio`** se establece en **`False`**.
- Si durante una pasada no se realiza ningún intercambio, significa que la lista ya está ordenada, por lo que el ciclo se termina prematuramente con **`break`**.
- Esto evita realizar pasadas innecesarias sobre la lista cuando ya está ordenada, mejorando la eficiencia.

#### Impresión de las pasadas
Durante cada pasada, se imprime el estado de la lista. Esto permite visualizar cómo el algoritmo va ordenando la lista en cada iteración, lo cual es útil para depurar y comprender el funcionamiento del algoritmo.

---

### Conceptos Clave para Principiantes

### 1. **Ciclos `for`**
El uso de **ciclos `for`** es fundamental en este código:
- El **ciclo externo** controla el número de pasadas que se realizan sobre la lista.
- El **ciclo interno** compara cada par de elementos adyacentes y los intercambia si es necesario.

### 2. **Intercambio de elementos**
La **asignación simultánea** de Python es una característica clave que facilita el intercambio de dos valores en una sola línea:
```python
lista[j], lista[j + 1] = lista[j + 1], lista[j]
```
Esta sintaxis es muy útil para cambiar valores sin necesidad de usar una variable temporal como en otros lenguajes.

### 3. **List Comprehension**
Python ofrece una forma compacta de crear listas mediante list comprehensions, lo que hace más fácil la creación de listas a partir de entradas del usuario:
```python
lista = [int(input(f"Ingrese el elemento {k + 1}: ")) for k in range(n)]
```
Esta línea crea una lista `lista` con los elementos ingresados por el usuario, iterando `n` veces.

---
### Ventajas y Limitaciones del Algoritmo

### Ventajas:
- **Simplicidad**: El algoritmo de burbuja es fácil de entender y adecuado para principiantes. Su lógica es directa y sencilla, lo que permite aprender sobre algoritmos de ordenamiento.
- **Optimización**:  El uso de la variable `intercambio` ayuda a mejorar la eficiencia del algoritmo al evitar iteraciones innecesarias una vez que la lista está ordenada.

### Limitaciones:
- **Ineficiencia para listas grandes**: El algoritmo de burbuja tiene una **complejidad de tiempo \(O(n^2)\)**, lo que lo hace ineficiente cuando se maneja una gran cantidad de elementos.
- **Menos eficiente comparado con otros algoritmos**: A pesar de su simplicidad, el algoritmo de burbuja es más lento que algoritmos más eficientes como quicksort o mergesort, especialmente cuando se trata de listas grandes.

### Conclusión

## Reflexión Final

Hemos explorado la implementación del algoritmo de **ordenamiento burbuja** en diferentes lenguajes de programación: **C++**, **C**, **Python** y **Pseudocódigo**. Cada uno de estos lenguajes presenta características y enfoques únicos, pero todos comparten el mismo propósito: ordenar una lista de números de manera eficiente y comprensible. A través de estos ejercicios, no solo hemos aprendido a implementar un algoritmo clásico de ordenamiento, sino que también hemos adquirido valiosas lecciones sobre cómo abordar problemas de programación y cómo los distintos lenguajes influyen en la implementación de soluciones.

### Aprendizajes Clave

1. **Conceptos Fundamentales de Algoritmos**:
   El algoritmo de burbuja, aunque simple, nos ofrece una visión profunda sobre cómo funcionan los algoritmos de ordenamiento. Nos ha permitido entender el proceso de comparar y ordenar elementos mediante intercambios repetidos. A pesar de su ineficiencia en grandes conjuntos de datos, es fundamental comprender cómo y por qué funciona, lo que nos da una base sólida para abordar algoritmos más complejos en el futuro.

2. **Lenguajes y Estilo de Programación**:
   A través de la implementación en diferentes lenguajes, desde el pseudocódigo hasta los lenguajes de programación reales, pudimos apreciar las diferencias en la sintaxis y los paradigmas. Por ejemplo:
   - **C++** nos ofreció la flexibilidad de trabajar con punteros y la gestión manual de memoria, lo que es útil para desarrollar un control preciso sobre los datos.
   - **C** mostró cómo interactuar de manera eficiente con la memoria y cómo manejar la asignación dinámica utilizando `malloc` y `free`, lo cual es crucial para el desarrollo en sistemas más cercanos al hardware.
   - **Python**, por su parte, se destacó por su sintaxis concisa y su enfoque en la legibilidad del código, con herramientas como las **list comprehensions** y la **asignación simultánea**, lo que hace que las implementaciones sean mucho más limpias y rápidas de escribir.
   - El **pseudocódigo** nos permitió conceptualizar y planificar la lógica del algoritmo sin preocuparnos por las complejidades de la sintaxis, lo cual es útil para la fase inicial del diseño de cualquier programa.

3. **Optimización y Mejora**:
   Se enfatizó la importancia de la optimización en los algoritmos. Aunque el algoritmo de burbuja es educativo y fácil de entender, es fundamental ser consciente de su ineficiencia en listas grandes. Gracias a la introducción de la variable `intercambio`, aprendimos cómo mejorar su rendimiento minimizando las pasadas innecesarias. Este concepto de **optimización** es algo que se aplica a todos los algoritmos y es un aspecto clave de la programación.


<p align="center">
<img src="https://i.imgur.com/iIkvbtg.gif" alt="GIF Gráfico del Algoritmo" width="600"/>
</p>
