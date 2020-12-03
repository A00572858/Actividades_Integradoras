# TC1031 Integral (Estructura extra)
## Disjoint Sets
Los disjoint sets se pueden usar siempre que se quiera usar conjuntos y que haya un representante de dicho conjunto.\
En este programa lo usamos para hacer un organigrama y definir quien es jefe de quien, con la posibilidad de imprimir
quien es el jefe de quien.

## Funciones del programa:
## _main()_
### casosdeprueba()
Funcion que imprime el caso de prueba leyendo los nombres de un archivo .txt
y escribe en un archivo el organigrama final.\
Complejidad O(n) ya que se lee del archivo cada nombre que se ingresara al array.

### crearorganigrama()
Esta funcion crea un disjoint sets desde cero dando el título de jefe a especificas personas.\
Complejidad O(n+c) siendo n el número de nombres y c el número de conecciones.

## _disjointsets()_

### clear()
Funcion que borra la lista de jefes de los nodos e inicializa en cero el atributo de tamaño de la clase.\
Complejidad O(1) ya que se usa una funcion ya integrada en el sistema y no hay ciclos.

### find()
Busca recursivamente el jefe del conjunto en el que esta cierto nodo o persona.\
Complejidad O(1) ya que se entra directamente al índice del arreglo y no hay ciclos.

### crearunion()
Funcion que crea la union o, en otras palabras, define quien es el jefe de quien
dependiendo del orden en el que se ingresan los indices de cada nodo o persona.\
Complejidad O(1) ya que son definiciones directas y no hay ciclos.

### toString()
Funcion que imprime quien es el jefe de quien escribiendo el nombre de la persona.\
Complejidad O(n) ya que es un ciclo que pasa por cada persona dentro del array.

### print()
Funcion que imprime el indice y el nombre de cada persona o nodo que hay en el arreglo.\
Complejidad O(n) ya que imprime cada una de las personas en el arreglo.

## Casos de prueba:
### Input:
2\
3
### Output:
Luis's boss = David\
Romel's boss = David\
David's boss = Benji\
Daniel's boss =\
Rodrigo's boss = Jesus\
Jesus's boss = Benji\
Benji's boss =
