// Materia: Programación I, Paralelo 4
// Autor: Andres Ignacio Pabon Sotomayor
// Fecha creación: 20/09/2023
// Fecha modificación: 21/09/2023
// Número de ejericio: 1
// Problema planteado: Lee por teclado un año y calcula y muestra si es bisiesto 
#include <iostream>
using namespace std;

int esBisiesto(int año) {
    if ((año % 4 == 0 && año % 100 != 0) || (año % 400 == 0)) {
        return 1; // es bisiesto
    } else {
        return 0; // no es bisiesto
    }
}

int main() {
    int año;

    cout << "Ingrese un año: ";
    cin >> año;

    if (esBisiesto(año) == 1) {
        cout << año << " es un año bisiesto." << endl;
    } else {
        cout << año << " no es un año bisiesto." << endl;
    }

    return 0;
}


