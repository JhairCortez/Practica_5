// Materia: Programación I, Paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha creación: 25/09/2024
// Número de ejercicio: 8
// Problema planteado: Numeros narcicistas

#include <iostream>
#include <math.h>
using namespace std;
int digitos(int);
int generarSuma(int);
int main (){
    int n;
    cout << "Ingrese el numero"<<endl;
    cin >> n;
    int suma = generarSuma(n);
    if(n == suma){
        cout << "Es un numero narcisista"<<endl;
    } else {
        cout << "No es un numero narcisista"<<endl;
    }
}

int digitos ( int n){
    int d = 0;

    while(n > 0){
        d++;
        n /= 10;
    }

    return d;
}

int generarSuma(int n){
    int dig = digitos(n);
    int suma = 0;
    while(n > 0){
        int d = n % 10;
        suma += pow(d, dig);
        n /= 10;
    }
    return suma;
}