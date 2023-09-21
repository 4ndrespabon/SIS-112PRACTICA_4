// Materia: Programación I, Paralelo 4
// Autor: Andres Ignacio Pabon Sotomayor
// Fecha creación: 21/09/2023
// Fecha modificación: 21/09/2023
// Número de ejericio: 6
// Problema planteado: Escriba un programa que mediante una función determine el pago por el servicio de estacionamiento de coches en un parqueo, 
// teniendo en cuenta que la primera hora de estadía se paga 8 Bs., y las restantes 3 Bs. c/hora. 
// Si el uso del servicio es menor a una hora se cobra por la hora y de igual manera si excede la hora se cobra por la hora siguiente.
// Verificar con los siguientes casos: 
// Hora Entrada   Minuto de entrada    Hora Salida   Minuto Salida   Tiempo    Pago 
// 09  35  10  15     1 hora           08 Bs.
// 11  10  12  20     2 horas          11 Bs. 
// 17  55  21  30     4 horas          17 Bs. 

#include <iostream>
using namespace std;

int calcularTiempoEstadia(int horaEntrada, int minutoEntrada, int horaSalida, int minutoSalida) {
    // Calcular el tiempo de entrada en minutos 
    int tiempoEntrada = horaEntrada * 60 + minutoEntrada;

    // Calcular el tiempo de salida en minutos 
    int tiempoSalida = horaSalida * 60 + minutoSalida;

    // Calcular el tiempo de estadía en minutos
    int tiempoEstadia = tiempoSalida - tiempoEntrada;

    if (tiempoEstadia < 60) {
        tiempoEstadia = 60;
    } else {
        int resto = tiempoEstadia % 60;
        if (resto > 0) {
            tiempoEstadia = tiempoEstadia + (60 - resto);
        }
    }

    return tiempoEstadia;
}

double calcularPagoEstacionamiento(int tiempoEstadia) {
    double costoPrimeraHora = 8.0;
    double costoHoraAdicional = 3.0;

    if (tiempoEstadia <= 60) {
        return costoPrimeraHora;
    } else {
        int horas = tiempoEstadia / 60;
        if (tiempoEstadia % 60 != 0) {
            horas++;
        }
        return costoPrimeraHora + (horas - 1) * costoHoraAdicional;
    }
}

int main() {
    int horaEntrada, minutoEntrada, horaSalida, minutoSalida;

    cout << "Ingrese la hora de entrada (en formato HH MM): ";
    cin >> horaEntrada >> minutoEntrada;

    cout << "Ingrese la hora de salida (en formato HH MM): ";
    cin >> horaSalida >> minutoSalida;

    int tiempoEstadia = calcularTiempoEstadia(horaEntrada, minutoEntrada, horaSalida, minutoSalida);
    double pago = calcularPagoEstacionamiento(tiempoEstadia);

    cout << "Tiempo de estadía: " << tiempoEstadia << " minutos" << endl;
    cout << "Pago por estacionamiento: " << pago << " Bs." << endl;

    return 0;
}
