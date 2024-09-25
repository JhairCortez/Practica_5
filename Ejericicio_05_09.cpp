// Materia: Programación I, Paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha creación: 25/09/2024
// Número de ejercicio: 9
// Problema planteado: Calcule el máximo común divisor Y el mínimo común múltiplo

#include <iostream>

using namespace std;
int calcularMCD(int a, int b) 
{
    while (b != 0) {
        int temp = b;
        b = a % b; 
        a = temp; 
    }
    return a; 
}

int calcularMCM(int a, int b) 
{
    return (a * b) / calcularMCD(a, b); 
}

int main() 
{
    int num1, num2;
    cout << "Ingrese el primer número: ";
    cin >> num1;
    cout << "Ingrese el segundo número: ";
    cin >> num2;
    int mcd = calcularMCD(num1, num2);
    int mcm = calcularMCM(num1, num2);
    cout << "El Máximo Común Divisor (MCD) de " << num1 << " y " << num2 << " es: " << mcd << endl;
    cout << "El Mínimo Común Múltiplo (MCM) de " << num1 << " y " << num2 << " es: " << mcm << endl;
    return 0;
}