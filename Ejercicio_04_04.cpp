// Materia: Programación I, Paralelo 4
// Autor: Andres Ignacio Pabon Sotomayor
// Fecha creación: 20/09/2023
// Fecha modificación: 21/09/2023
// Número de ejericio: 4
// Problema planteado:Escribir el programa para solicitar al usuario N calificaciones comprendidas en el rango de 1 a 100,
// calcular y presentar la sumatoria y promedio de estas N calificaciones. 
// La entrada de valores es para las calificaciones, debe hacerlo mediante una función. 
#include <iostream>
using namespace std;

// Función para obtener calificaciones y calcular sumatoria y promedio
void obtenerCalificaciones(int n, int &sumatoria, double &promedio) {
    sumatoria = 0;
    for (int i = 1; i <= n; i++) {
        int calificacion;
        do {
            cout << "Ingrese la calificación " << i << " (entre 1 y 100): ";
            cin >> calificacion;
        } while (calificacion < 1 || calificacion > 100); // Validación del rango
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

