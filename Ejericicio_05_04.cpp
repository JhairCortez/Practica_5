// Materia: Programación I, Paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha creación: 25/09/2024
// Número de ejercicio: 4
// Problema planteado: Cambio a entrgar

#include <iostream>

using namespace std;
void cambio (float);
int main ()
{
    float precio, efectivo;
    cout << "Ingrese el precio ";
    cin >> precio;
    cout << "Ingrese el dimero recibido ";
    cin >> efectivo;
    cambio(efectivo - precio);
    return 0; 
}

void cambio (float n)
{
    if(n >= 5.0){
        int moneda = n / 5.0;
        cout << moneda <<" monedas de 5 Bs"<<endl;
        n -= (moneda * 5.0);
    }
    if(n >= 1.0){
        int moneda = n / 1.0;
        cout << moneda <<" monedas de 1 Bs"<<endl;
        n -= (moneda * 1.0);
    }
    if(n >= 0.5){
        int moneda = n / 0.5;
        cout << moneda <<" monedas de 0.5 Bs"<<endl;
        n -= (moneda * 0.5);
    }
    if(n >= 0.2){
        int moneda = n / 0.2;
        cout << moneda <<" monedas de 0.2 Bs"<<endl;
        n -= (moneda * 0.2);
    }
    if(n >= 0.1){
        int moneda = n / 0.1;
        cout << moneda <<" monedas de 0.1 Bs"<<endl;
        n -= (moneda * 0.1);
    }
}