// Materia: Programación I, Paralelo 4
// Autor: Andres Ignacio Pabon Sotomayor
// Fecha creación: 20/09/2023
// Fecha modificación: 21/09/2023
// Número de ejericio: 2
// Problema planteado: Lee por teclado la fecha actual y la fecha de nacimiento de una persona y calcula su edad. 

#include <iostream>
using namespace std;

// Función para calcular la edad
int calcularEdad(int añoActual, int mesActual, int diaActual, int añoNacimiento, int mesNacimiento, int diaNacimiento) {
    int edad = añoActual - añoNacimiento;
    if (mesNacimiento > mesActual || (mesNacimiento == mesActual && diaNacimiento > diaActual)) {
        edad--;
    }
    return edad;
}

int main() {
    int añoActual, mesActual, diaActual;
    int añoNacimiento, mesNacimiento, diaNacimiento;

    cout << "Ingrese el año actual: ";
    cin >> añoActual;
    cout << "Ingrese el mes actual: ";
    cin >> mesActual;
    cout << "Ingrese el día actual: ";
    cin >> diaActual;

    cout << "Ingrese el año de nacimiento: ";
    cin >> añoNacimiento;
    cout << "Ingrese el mes de nacimiento: ";
    cin >> mesNacimiento;
    cout << "Ingrese el día de nacimiento: ";
    cin >> diaNacimiento;

    int edad = calcularEdad(añoActual, mesActual, diaActual, añoNacimiento, mesNacimiento, diaNacimiento);

    cout << "La edad es: " << edad << " años." << endl;

    return 0;
}

