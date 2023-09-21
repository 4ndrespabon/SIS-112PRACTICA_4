// Materia: Programaci�n I, Paralelo 4
// Autor: Andres Ignacio Pabon Sotomayor
// Fecha creaci�n: 20/09/2023
// Fecha modificaci�n: 21/09/2023
// N�mero de ejericio: 1
// Problema planteado: Lee por teclado un a�o y calcula y muestra si es bisiesto 
#include <iostream>
using namespace std;

int esBisiesto(int a�o) {
    if ((a�o % 4 == 0 && a�o % 100 != 0) || (a�o % 400 == 0)) {
        return 1; // es bisiesto
    } else {
        return 0; // no es bisiesto
    }
}

int main() {
    int a�o;

    cout << "Ingrese un a�o: ";
    cin >> a�o;

    if (esBisiesto(a�o) == 1) {
        cout << a�o << " es un a�o bisiesto." << endl;
    } else {
        cout << a�o << " no es un a�o bisiesto." << endl;
    }

    return 0;
}


