// Materia: Programación I, Paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha creación: 25/09/2024
// Número de ejercicio: 6
// Problema planteado: Numeros primos

#include <iostream>
#include <random>
#include <cstdlib>
#include <ctime>

using namespace std;

bool EsPrimo(int);
void generar();

int main (){
    generar();
}

bool EsPrimo (int n){
    if(n <= 1){
        return false;
    }

    for(int i = 2; i * i <= n; i++){
        if(n % i == 0){
            return false;
        }
    }

    return true;
}

void generar (){
    srand(time(0));

    for(int i = 0; i < 50; i++){
        int numero = (rand() % 99) + 1;
        cout << numero;
        if(EsPrimo(numero)){
            cout << " es primo"<<endl;
        } else {
            cout << endl;
        }
    }
}