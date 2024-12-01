Algoritmo OrdenamientoQuickSort
	Dimensionar lista(5)
	
	Para i <- 1 Hasta 5 Hacer
		Escribir 'Ingresa el número en la posición ', i, ': '
		Leer lista[i]
	FinPara
	
	Escribir 'Lista original:', lista[1], ',', lista[2], ',', lista[3], ',', lista[4], ',', lista[5]
	
	OrdenarQuickSort(lista, 1, 5)
	
	Escribir 'Lista ordenada:', lista[1], ',', lista[2], ',', lista[3], ',', lista[4], ',', lista[5]
FinAlgoritmo

SubProceso OrdenarQuickSort(lista, bajo, alto)
	Definir pivote, i, j, temp Como Entero
	
	Si bajo < alto Entonces
		pivote <- Particionar(lista, bajo, alto)
		
		OrdenarQuickSort(lista, bajo, pivote - 1)
		
		OrdenarQuickSort(lista, pivote + 1, alto)
	FinSi
FinSubProceso

Funcion Particionar(lista, bajo, alto) Como Entero
	Definir pivote, i, j, temp Como Entero
	pivote <- lista[alto]
	i <- bajo - 1
	
	Para j <- bajo Hasta alto - 1 Hacer
		Si lista[j] < pivote Entonces
			i <- i + 1
			temp <- lista[i]
			lista[i] <- lista[j]
			lista[j] <- temp
		FinSi
	FinPara
	
	temp <- lista[i + 1]
	lista[i + 1] <- lista[alto]
	lista[alto] <- temp
	
	Retornar i + 1
FinFuncion
