// Materia: Programación I, Paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha creación: 25/09/2024
// Número de ejercicio: 3
// Problema planteado: Leer cantidad de segundos

#include <iostream>
using namespace std;

void convertirTiempo(int segundos) 
{
    int horas = segundos / 3600;        
    int minutos = (segundos % 3600) / 60;  
    int segRestantes = segundos % 60;  
    cout << horas << " horas, " << minutos << " minutos, " << segRestantes << " segundos." << endl;
}

int main() 
{
    int segundos;
    cout << "Ingrese la cantidad de segundos: ";
    cin >> segundos;
    convertirTiempo(segundos);
    return 0;
}