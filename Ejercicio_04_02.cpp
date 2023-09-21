// Materia: Programaci�n I, Paralelo 4
// Autor: Andres Ignacio Pabon Sotomayor
// Fecha creaci�n: 20/09/2023
// Fecha modificaci�n: 21/09/2023
// N�mero de ejericio: 2
// Problema planteado: Lee por teclado la fecha actual y la fecha de nacimiento de una persona y calcula su edad. 

#include <iostream>
using namespace std;

// Funci�n para calcular la edad
int calcularEdad(int a�oActual, int mesActual, int diaActual, int a�oNacimiento, int mesNacimiento, int diaNacimiento) {
    int edad = a�oActual - a�oNacimiento;
    if (mesNacimiento > mesActual || (mesNacimiento == mesActual && diaNacimiento > diaActual)) {
        edad--;
    }
    return edad;
}

int main() {
    int a�oActual, mesActual, diaActual;
    int a�oNacimiento, mesNacimiento, diaNacimiento;

    cout << "Ingrese el a�o actual: ";
    cin >> a�oActual;
    cout << "Ingrese el mes actual: ";
    cin >> mesActual;
    cout << "Ingrese el d�a actual: ";
    cin >> diaActual;

    cout << "Ingrese el a�o de nacimiento: ";
    cin >> a�oNacimiento;
    cout << "Ingrese el mes de nacimiento: ";
    cin >> mesNacimiento;
    cout << "Ingrese el d�a de nacimiento: ";
    cin >> diaNacimiento;

    int edad = calcularEdad(a�oActual, mesActual, diaActual, a�oNacimiento, mesNacimiento, diaNacimiento);

    cout << "La edad es: " << edad << " a�os." << endl;

    return 0;
}

