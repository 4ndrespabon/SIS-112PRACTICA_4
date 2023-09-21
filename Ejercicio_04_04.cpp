// Materia: Programaci�n I, Paralelo 4
// Autor: Andres Ignacio Pabon Sotomayor
// Fecha creaci�n: 20/09/2023
// Fecha modificaci�n: 21/09/2023
// N�mero de ejericio: 4
// Problema planteado:Escribir el programa para solicitar al usuario N calificaciones comprendidas en el rango de 1 a 100,
// calcular y presentar la sumatoria y promedio de estas N calificaciones. 
// La entrada de valores es para las calificaciones, debe hacerlo mediante una funci�n. 
#include <iostream>
using namespace std;

// Funci�n para obtener calificaciones y calcular sumatoria y promedio
void obtenerCalificaciones(int n, int &sumatoria, double &promedio) {
    sumatoria = 0;
    for (int i = 1; i <= n; i++) {
        int calificacion;
        do {
            cout << "Ingrese la calificaci�n " << i << " (entre 1 y 100): ";
            cin >> calificacion;
        } while (calificacion < 1 || calificacion > 100); // Validaci�n del rango
        sumatoria += calificacion;
    }
    promedio = static_cast<double>(sumatoria) / n;
}

int main() {
    int n;
    cout << "Ingrese la cantidad de calificaciones a ingresar: ";
    cin >> n;

    int sumatoria;
    double promedio;

    obtenerCalificaciones(n, sumatoria, promedio);

    cout << "La sumatoria de las calificaciones es: " << sumatoria << endl;
    cout << "El promedio de las calificaciones es: " << promedio << endl;

    return 0;
}

