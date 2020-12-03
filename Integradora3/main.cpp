/*
*Rodrigo Muñoz Guerrero
*A00572858
*/
#include <iostream>
#include <cstring>
#include <string>
#include <fstream>
#include <sstream>
#include "disjointsets.h"

using namespace std;

/*
*Funcion que imprime el caso de prueba leyendo los nombres de un archivo .txt
*y escribe en un archivo el organigrama final.
*Complejidad O(1) ya que son solo asignaciones de variables y no hay ciclos.
*/
void casosdeprueba(){
    vector<string> v;
    string archivo = "nombres.txt", line;
    ifstream lee(archivo);
    if (lee.is_open()){
        while (getline(lee,line)){
            v.push_back(line);
        }
    }
    lee.close();
    Disjoint disj(v);
    disj.crearunion(0,2);
    disj.crearunion(1,2);
    disj.crearunion(4,5);
    disj.crearunion(5,6);
    disj.crearunion(2,4);
    cout << disj.toString() << endl;
    ofstream fileout("Organigrama.txt");
    if (fileout.is_open()){
        fileout << disj.toString();
    }
    fileout.close();
    disj.clear();
}

/*
* Esta funcion crea un disjoint sets desde cero dando el título de jefe
* a especificas personas.
* Complejidad O(n+c) siendo n el número de nombres y c el número de conecciones.
*/
void crearorganigrama(){
    string name;
    vector<string> nombres;
    cout << "Ingresa el nombre de la persona:\n(Cuando hayas acabo, ingresa \"-1\")\n" << endl;
    while (name!="-1"){
        cin >> name;
        if (name=="-1"){
            continue;
        }
        nombres.push_back(name);
    }
    Disjoint empresa(nombres);
    empresa.print();
    int a, b;
    cout << "Ingresa el numero de quien es el jefe de quien:\nejemplo:\n 2 \n5 \n(5 es el jefe de 2)\n" <<
    "Cuando acabes ingresa -1" << endl;
    while (a!=-1){
        cout << "\nNueva coneccion" << endl;
        cin >> a;
        if (a==-1){
            continue;
        }
        cin >> b;
        empresa.crearunion(a,b);
    }
    cout << empresa.toString() << endl;
    empresa.clear();
}

int main()
{
    string ans;
    while (ans!="-1"){
        cout << "MENU:\n 1)Crear organigrama 2)Casos de prueba 3)SALIR" << endl;
        cin >> ans;
        if (ans == "1" || ans == "crear" || ans == "organigrama" || ans == "crear organigrama"){
            crearorganigrama();
        }
        else if (ans == "2" || ans == "casos" || ans == "casos de prueba"){
            casosdeprueba();
        }
        else if (ans == "3" || ans == "SALIR" || ans == "salir"){
            ans = "-1";
        }
    }
    return 0;
}
