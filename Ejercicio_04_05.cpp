// Materia: Programaci�n I, Paralelo 4
// Autor: Andres Ignacio Pabon Sotomayor
// Fecha creaci�n: 20/09/2023
// Fecha modificaci�n: 21/09/2023
// N�mero de ejericio: 5
// Problema planteado: Elabore un programa para registro acad�mico de la UCB, 
// que solicite el nombre de una materia, el paralelo, el docente y sus correspondientes notas de periodo.
// Al final, se muestra la nota final y si aprob� o reprobo el curso. (realizar con estructuras)
#include <iostream>
#include <string>
using namespace std;

//Estructura de Curso 
struct Curso {
    string nombreMateria;
    string paralelo;
    string docente;
    double nota1;
    double nota2;
    double nota3;
};

int main() {
    Curso curso;
    
    cout << "Registro Acad�mico de la UCB" << endl;
    
    cout << "Nombre de la materia: ";
    cin >> curso.nombreMateria;
    
    cout << "Paralelo: ";
    cin >> curso.paralelo;
    
    cout << "Docente: ";
    cin >> curso.docente;
    
    cout << "Nota del primer periodo: ";
    cin >> curso.nota1;
    
    cout << "Nota del segundo periodo: ";
    cin >> curso.nota2;
    
    cout << "Nota del tercer periodo: ";
    cin >> curso.nota3;
    
    double notaFinal = (curso.nota1 + curso.nota2 + curso.nota3) / 3.0;
    
    cout << "Nota Final: " << notaFinal << endl;
    
    if (notaFinal >= 70.0) {
        cout << "Aprob� el curso" << endl;
    } else {
        cout << "Reprob� el curso." << endl;
    }
    
    return 0;
}
