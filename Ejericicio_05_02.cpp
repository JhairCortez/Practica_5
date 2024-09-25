// Materia: Programación I, Paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha creación: 25/09/2024
// Número de ejercicio: 2
// Problema planteado: Calcule la edad exacta de una persona

#include <iostream>
using namespace std;

void calcularEdad(int diaNac, int mesNac, int anioNac, int diaActual, int mesActual, int anioActual) 
{
    int anios, meses, dias;
    if (diaActual >= diaNac) 
    {
        dias = diaActual - diaNac;
    } else 
    {
        dias = diaActual + 30 - diaNac;
        mesActual -= 1;
    }
    if (mesActual >= mesNac) 
    {
        meses = mesActual - mesNac;
    } else 
    {
        meses = mesActual + 12 - mesNac;
        anioActual -= 1;
    }
    anios = anioActual - anioNac;
    cout << "Edad: " << anios << " años, " << meses << " meses y " << dias << " días." << endl;
}

int main() 
{
    int diaNac, mesNac, anioNac;
    int diaActual, mesActual, anioActual;
    cout << "Ingrese la fecha de nacimiento (dia mes anio): ";
    cin >> diaNac >> mesNac >> anioNac;
    cout << "Ingrese la fecha actual (dia mes anio): ";
    cin >> diaActual >> mesActual >> anioActual;
    calcularEdad(diaNac, mesNac, anioNac, diaActual, mesActual, anioActual);
    return 0;
}