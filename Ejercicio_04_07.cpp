// Materia: Programación I, Paralelo 4
// Autor: Andres Ignacio Pabon Sotomayor
// Fecha creación: 21/09/2023
// Fecha modificación: 21/09/2023
// Número de ejericio: 7
// Problema planteado: Escribir un programa que lea el salario de un empleado 
// y mediante una función efectué un incremento salarial en base a la siguiente escala: 
//      • Si el salario es menor < 1000 Bs. incremente en un 20% 
//      • Si el salario es mayor o igual a 1000 pero es menor a 3000 Bs. Incremente en un 15% 
//      • Si el salario es mayor o igual a 3000 pero es menor a 6000 Bs. Incremente en un 10% 
//      • Si el salario es mayor o igual a 6000 Bs.   Incremente en un 5% 
// La función debe obtener el incremento y el nuevo salario. 

#include <iostream>
using namespace std;

// Función para calcular el nuevo salario con el incremento
double calcularNuevoSalario(double salario) {
    double nuevoSalario = salario;

    if (salario < 1000) {
        nuevoSalario += salario * 0.20;  
    } else if (salario < 3000) {
        nuevoSalario += salario * 0.15;  
    } else if (salario < 6000) {
        nuevoSalario += salario * 0.10;  
    } else {
        nuevoSalario += salario * 0.05;  
    }

    return nuevoSalario;
}

int main() {
    double salarioActual, nuevoSalario;

    cout << "Ingrese el salario actual del empleado: ";
    cin >> salarioActual;

    nuevoSalario = calcularNuevoSalario(salarioActual);

    cout << "El nuevo salario del empleado es: " << nuevoSalario << " Bs." << endl;

    return 0;
}
