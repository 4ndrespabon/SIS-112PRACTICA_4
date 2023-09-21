// Materia: Programación I, Paralelo 4
// Autor: Andres Ignacio Pabon Sotomayor
// Fecha creación: 20/09/2023
// Fecha modificación: 21/09/2023
// Número de ejericio: 3
// Problema planteado: Leer los datos de doce personas como son: nombre, edad, estatura, peso, 
// posteriormente indicar cuál es el nombre de la persona de menor edad, el promedio de las estaturas y el de los pesos. 
// (realizar con estructuras) 
#include <iostream>
#include <string>
using namespace std;

struct Persona {
    string nombre;
    int edad;
    double estatura;
    double peso;
};

int main() {
    
    Persona personas[12];

    // Lectura de datos para cada persona
    for (int i = 0; i < 12; i++) {
        cout << "Ingrese nombre de la persona " << i + 1 << ": ";
        cin >> personas[i].nombre;

        cout << "Ingrese edad de " << personas[i].nombre << ": ";
        cin >> personas[i].edad;

        cout << "Ingrese estatura (en metros) de " << personas[i].nombre << ": ";
        cin >> personas[i].estatura;

        cout << "Ingrese peso (en kilogramos) de " << personas[i].nombre << ": ";
        cin >> personas[i].peso;

        cout << endl;
    }

    // Persona más joven
    int edadMinima = personas[0].edad;
    string nombrePersonaMasJoven = personas[0].nombre;

    for (int i = 1; i < 12; i++) {
        if (personas[i].edad < edadMinima) {
            edadMinima = personas[i].edad;
            nombrePersonaMasJoven = personas[i].nombre;
        }
    }

    // Promedios
    double sumaEstaturas = 0.0;
    double sumaPesos = 0.0;

    for (int i = 0; i < 12; i++) {
        sumaEstaturas += personas[i].estatura;
        sumaPesos += personas[i].peso;
    }

    double promedioEstaturas = sumaEstaturas / 12.0;
    double promedioPesos = sumaPesos / 12.0;

    cout << "La persona más joven es: " << nombrePersonaMasJoven << " con " << edadMinima << " años" << endl;
    cout << "El promedio de estaturas es: " << promedioEstaturas << " metros" << endl;
    cout << "El promedio de pesos es: " << promedioPesos << " kilogramos" << endl;

    return 0;
}

