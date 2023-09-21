// Materia: Programaci�n I, Paralelo 4
// Autor: Andres Ignacio Pabon Sotomayor
// Fecha creaci�n: 21/09/2023
// Fecha modificaci�n: 21/09/2023
// N�mero de ejericio: 8
// Problema planteado: En una f�brica de computadoras se planea ofrecer a los clientes un descuento que depender� del n�mero de computadoras que compre.
// Si las computadoras son menos de cinco se les dar� un 10% de descuento sobre el total de la compra;
// si el n�mero de computadoras es mayor o igual a cinco pero menos de diez se le otorga un 20% de descuento;
// y si son 10 o m�s se les da un 40% de descuento. 
// El precio de cada computadora es un valor que el usuario ingrese desde el teclado.
// Se debe obtener el precio total que el cliente debe pagar y el valor del descuento. 

#include <iostream>
using namespace std;

// Funci�n para calcular el precio total y el descuento
void calcularPrecioTotalDescuento(int cantidadComputadoras, double precioPorComputadora, double &precioTotal, double &descuento) {
    double subtotal = cantidadComputadoras * precioPorComputadora;

    if (cantidadComputadoras < 5) {
        descuento = subtotal * 0.10;  
    } else if (cantidadComputadoras < 10) {
        descuento = subtotal * 0.20;  
    } else {
        descuento = subtotal * 0.40;  
    }

    precioTotal = subtotal - descuento;
}

int main() {
    int cantidadComputadoras;
    double precioPorComputadora, precioTotal, descuento;

    cout << "Ingrese la cantidad de computadoras que desea comprar: ";
    cin >> cantidadComputadoras;

    cout << "Ingrese el precio por computadora: ";
    cin >> precioPorComputadora;

    calcularPrecioTotalDescuento(cantidadComputadoras, precioPorComputadora, precioTotal, descuento);

    cout << "Precio total a pagar: " << precioTotal << " Bs." << endl;
    cout << "Descuento aplicado: " << descuento << " Bs." << endl;

    return 0;
}
