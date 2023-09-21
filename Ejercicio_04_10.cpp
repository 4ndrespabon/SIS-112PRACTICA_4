// Materia: Programación I, Paralelo 4
// Autor: Andres Ignacio Pabon Sotomayor
// Fecha creación: 21/09/2023
// Fecha modificación: 21/09/2023
// Número de ejericio: 10
// Problema planteado: Construir las funciones para ordenar un vector de N elementos aleatorios y los ordene por. 
//      • Por selección 
//      • Por inserción 
//      • Por el método burbuja 
//      • Por el método Shell 
//      • Por QuickSort 

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Función para imprimir un arreglo
void imprimirArreglo(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Función de ordenamiento por selección
void seleccionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        
        // Intercambio directo sin usar swap
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

// Función de ordenamiento por inserción
void insercionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            // Intercambio directo sin usar swap
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

// Función de ordenamiento por el método burbuja
void burbujaSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Intercambio directo sin usar swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Función de partición para QuickSort
int particion(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            // Intercambio directo sin usar swap
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    // Intercambio directo sin usar swap
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    return (i + 1);
}

// Función de ordenamiento por QuickSort
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = particion(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    srand(time(0));
    int n;
    
    cout << "Ingrese la cantidad de elementos en el arreglo: ";
    cin >> n;
    
    int* numeros = new int[n];  // Crear un arreglo para almacenar los números
    int* numerosCopia = new int[n];  // Crear una copia del arreglo para mantener los números originales

    for (int i = 0; i < n; i++) {
        numeros[i] = rand() % 100;  // Llenar el arreglo con números aleatorios entre 0 y 99
        numerosCopia[i] = numeros[i];  
    }
    
    cout << "Arreglo original:" << endl;
    imprimirArreglo(numeros, n);

    // Ordenar por selección
    seleccionSort(numeros, n);
    cout << "Ordenado por selección:" << endl;
    imprimirArreglo(numeros, n);

    // Restaurar el arreglo original desde la copia
    for (int i = 0; i < n; i++) {
        numeros[i] = numerosCopia[i];
    }

    // Ordenar por inserción
    insercionSort(numeros, n);
    cout << "Ordenado por inserción:" << endl;
    imprimirArreglo(numeros, n);

    // Restaurar el arreglo original desde la copia
    for (int i = 0; i < n; i++) {
        numeros[i] = numerosCopia[i];
    }

    // Ordenar por el método burbuja
    burbujaSort(numeros, n);
    cout << "Ordenado por el método burbuja:" << endl;
    imprimirArreglo(numeros, n);

    // Restaurar el arreglo original desde la copia
    for (int i = 0; i < n; i++) {
        numeros[i] = numerosCopia[i];
    }

    // Ordenar por QuickSort
    quickSort(numeros, 0, n - 1);
    cout << "Ordenado por QuickSort:" << endl;
    imprimirArreglo(numeros, n);

    delete[] numeros;
    delete[] numerosCopia;

    return 0;
}

