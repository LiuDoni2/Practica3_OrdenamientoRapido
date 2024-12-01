def quicksort(lista):
    if len(lista) <= 1:  
        return lista
    else:
        pivote = lista[0]  
        menores = [x for x in lista[1:] if x <= pivote]  
        mayores = [x for x in lista[1:] if x > pivote]  
        return quicksort(menores) + [pivote] + quicksort(mayores) 

print("Ordenamiento  Rapido - Quick Sort")
n = int(input("Ingrese el número de elementos: "))  
lista = [int(input(f"Ingrese el elemento {k + 1}: ")) for k in range(n)]  

print("Lista original:", lista)
lista_ordenada = quicksort(lista) 
print("Lista ordenada:", lista_ordenada)
