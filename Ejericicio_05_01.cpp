// Materia: Programación I, Paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha creación: 25/09/2024
// Número de ejercicio: 1
// Problema planteado: Calcular el pago mensual de un prestamo

#include <iostream>
#include <cmath> 

using namespace std;
double calcularPagoMensual(double monto, double interesAnual, int anios) 
{
    double interesMensual = interesAnual / 12 / 100; 
    int meses = anios * 12;
    return (monto * interesMensual * pow(1 + interesMensual, meses)) / (pow(1 + interesMensual, meses) - 1);
}

int main() 
{
    double monto, interes;
    int anios;
    cout << "Monto del préstamo: ";
    cin >> monto;
    cout << "Tasa de interés anual (%): ";
    cin >> interes;
    cout << "Años para pagar: ";
    cin >> anios;
    cout << "Pago mensual: " << calcularPagoMensual(monto, interes, anios) << endl;
    return 0;
}