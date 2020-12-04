# TC1031 Integral (Grafos y Hashes)

## Grafos / Hashes 
En este programa se tiene un grafo de 10 nodos y 30 conecciones, con los cuales se hace un
BFS buscando el camino más corto y el más barato entre dos nodos ingresados.
En el programa se utilizan tambien hashes para saber de qué país se esta hablando al ingresar
el número de nodo que lo representa
## Funciones del programa:
## _main()_
### createh()
Función que coloca en las listas de llaves y valores del Hash los valores 
que se le dan en el main.\
Complejidad O(n) porque hace lo mismo para el número de elementos totales de los vectores.

### printcountries()
Esta función imprime los países opciones para las consultas.\
O(n) ya que va aumentando la variable i conforme se imprimen los países

## _program.h_
### findCheapestPrice()
Función para encontrar el camino más barato entre dos grafos.\
Complejidad O(v+e) por ser un algoritmo de búsqueda BFS (Breadth_First Search).
Usar un BFS para encontrar el camino más corto en un grafo sólo es recomendable con 
grafos pequeños ya que como se tiene que explorar todo el grafo, con estructuras de miles 
de nodos puede ser muy pesado y lento.

### findQuickestPath()
Esta función hace lo mismo que la pasada pero en vez de imprimir 
el camino más barato, éste imprime el camino más rápido.\
Complejidad O(v+e) por ser un algoritmo de búsqueda BFS (Breadth_First Search).

## _hash.h_
### indexOf()
Función que regresa el índice del array de llaves en el que se encuentra un valor ingresado.\
Complejidad O(1) porque se aseguró que haya el mismo número de valores que de índices de los arrays.

### put()
Funcion que coloca en los arrays de las claves y los valores, la clave y el valor ingresados 
haciendo la unión de los mismos con el mismo índice en los dos arrays.\
Complejidad O(1) ya que son definiciones directas y no hay ciclos.

### get()
Regresa el valor asignado a la clave ingresada.\
Compllejidad O(1) ya que es una consulta directa porque se aseguró 
que no hubieran más elementos que índices en los arrays.

### clear()
Función que borra los dos arrays creados de claves y valores.\
Complejidad O(1) porque se borran los arrays directamente con una función "delete" ya integrada.

## Grafo
### Precio
![alt tag](https://raw.githubusercontent.com/A00572858/Actividades_Integradoras/Integradora2/graph.png)
### Horas

![alt tag](https://raw.githubusercontent.com/A00572858/Actividades_Integradoras/Integradora2/graph2.png)
## Casos de prueba:
## (Opción 10 dentro del menú del programa para más casos prueba)
## Caso 1
### Input:
3\
4\
2
### Output:
0   THAILAND\
1   MEXICO\
2   USA\
3   BRAZIL\
4   ENGLAND\
5   GERMANY\
6   SOUTH AFRICA\
7   INDIA\
8   RUSSIA\
9   TAIWAN\
10  CASOS PRUEBA\
FROM WHERE TO WHERE WOULD YOU LIKE TO MAKE A QUERY OF?\
(TYPE THE NUMBER CODE FOR EACH COUNTRY)\
SOURCE:\
DESTINATION:\
FROM: BRAZIL\
TO: ENGLAND\
CHEAPEST PATH= $900\
QUICKEST TIME= 22 H\
WOULD YOU LIKE TO DO ANOTHER QUERY?\
 1)YES 2)NO
 
 ## Caso 2
 ### Input:
8\
2\
1\
4\
9\
2
### Output:
0   THAILAND\
1   MEXICO\
2   USA\
3   BRAZIL\
4   ENGLAND\
5   GERMANY\
6   SOUTH AFRICA\
7   INDIA\
8   RUSSIA\
9   TAIWAN\
10  CASOS PRUEBA\
FROM WHERE TO WHERE WOULD YOU LIKE TO MAKE A QUERY OF?\
(TYPE THE NUMBER CODE FOR EACH COUNTRY)\
SOURCE:\
DESTINATION:\
FROM: RUSSIA\
TO: USA\
CHEAPEST PATH= $1000\
QUICKEST TIME= 19 H\
WOULD YOU LIKE TO DO ANOTHER QUERY?\
 1)YES 2)NO\
0   THAILAND\
1   MEXICO\
2   USA\
3   BRAZIL\
4   ENGLAND\
5   GERMANY\
6   SOUTH AFRICA\
7   INDIA\
8   RUSSIA\
9   TAIWAN\
10  CASOS PRUEBA\
FROM WHERE TO WHERE WOULD YOU LIKE TO MAKE A QUERY OF?\
(TYPE THE NUMBER CODE FOR EACH COUNTRY)\
SOURCE:\
DESTINATION:\
FROM: ENGLAND\
TO: TAIWAN\
CHEAPEST PATH= $700\
QUICKEST TIME= 10 H\
WOULD YOU LIKE TO DO ANOTHER QUERY?\
 1)YES 2)NO
