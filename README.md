# Actividades_Integradoras

# Correcciones:
### NOTA: (Ya se hicieron las correcciones de las integrales, solo está pendiente checar la "corrección final" en la Integral 2)
## Integral 1:
Se agregaron casos de prueba, lectura y escritura de archivos, se hizo un análisis de complejidad correcto y completo a cada algoritmo.\
Se describen las funciones del programa y se explica como usar las estructuras.\
SICT0301B Evalúa los componentes.\
SEG0702A Tecnologías de Vanguardia.
## Integral 2:
Se agregaron casos de prueba, lectura y escritura de archivos, se hizo un análisis de complejidad correcto y completo a cada algoritmo.\
Se describen las funciones del programa y se explica como usar las estructuras.\
SICT0301B Evalúa los componentes.\
SEG0702A Tecnologías de Vanguardia.

 ### _corrección final_
 Mandaba el error\
 _"mun_map_chunk(): invalid pointer\
 exited, aborted"_\
 Esto se debía a un error en la función _clear()_ (del archivo _hash.h_ líneas: _113 y 114_) que se hacia el delete de la variable apuntador de un array
 sin definir que era un array, se hizo el cambio y ahora corre sin problemas.

## Integral 3:
Se implementa una estructura de datos nueva que son los disjoint sets, se da un caso de prueba en el README y se documentan todas las funciones 
y estructura del programa y se da su complejidad a cada algoritmo y se explica como usar las estructuras.\
SICT0301B Evalúa los componentes.\
SEG0702A Tecnologías de Vanguardia.
