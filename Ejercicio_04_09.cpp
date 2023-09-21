// Materia: Programaci�n I, Paralelo 4
// Autor: Andres Ignacio Pabon Sotomayor
// Fecha creaci�n: 21/09/2023
// Fecha modificaci�n: 21/09/2023
// N�mero de ejericio: 9
// Problema planteado: A un trabajador se le paga seg�n las horas que trabaja en la semana, una tarifa de pago por hora. 
// Si la cantidad de horas trabajadas es mayor a 40, la tarifa se incrementa en un 50%.
// Calcular el salario total del trabajador, adem�s considere que si existe un anticipo se debe restar este valor al salario total.
// Al total debe descontar un 10% para el pago de impuestos. 
// Se debe obtener: 
//      - Total ganado 
//      - Total descuentos 
//      - Pago neto 

#include <iostream>
using namespace std;

// Funci�n para calcular el salario total
void calcularSalarioTotal(int horasTrabajadas, double tarifaPorHora, double anticipo, double &totalGanado, double &totalDescuentos, double &pagoNeto) {
    double salarioBase = horasTrabajadas * tarifaPorHora;
    double tarifaIncrementada = tarifaPorHora * 1.5;

    if (horasTrabajadas > 40) {
        salarioBase += (horasTrabajadas - 40) * tarifaIncrementada;
    }

    totalGanado = salarioBase;
    totalDescuentos = totalGanado * 0.10 + anticipo;
    pagoNeto = totalGanado - totalDescuentos;
}

int main() {
    int horasTrabajadas;
    double tarifaPorHora, anticipo, totalGanado, totalDescuentos, pagoNeto;

    cout << "Ingrese las horas trabajadas en la semana: ";
    cin >> horasTrabajadas;

    cout << "Ingrese la tarifa por hora: ";
    cin >> tarifaPorHora;

    cout << "Ingrese el anticipo (si no hay, ingrese 0): ";
    cin >> anticipo;

    calcularSalarioTotal(horasTrabajadas, tarifaPorHora, anticipo, totalGanado, totalDescuentos, pagoNeto);

    cout << "Total ganado: " << totalGanado << " Bs." << endl;
    cout << "Total descuentos: " << totalDescuentos << " Bs." << endl;
    cout << "Pago neto: " << pagoNeto << " Bs." << endl;

    return 0;
}

