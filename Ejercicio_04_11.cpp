// Materia: Programaci�n I, Paralelo 4
// Autor: Andres Ignacio Pabon Sotomayor
// Fecha creaci�n: 21/09/2023
// Fecha modificaci�n: 21/09/2023
// N�mero de ejericio: 11
// Problema planteado: Realice una funci�n que envi�ndole dos numero calcule el m�ximo com�n divisor con el algoritmo de Euclides.

#include <iostream>

// Funci�n para calcular el MCD utilizando el algoritmo de Euclides
int calcularMCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;

    std::cout << "Ingrese el primer n�mero: ";
    std::cin >> num1;

    std::cout << "Ingrese el segundo n�mero: ";
    std::cin >> num2;

    int mcd = calcularMCD(num1, num2);

    std::cout << "El MCD de " << num1 << " y " << num2 << " es: " << mcd << std::endl;

    return 0;
}

