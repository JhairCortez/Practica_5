// Materia: Programación I, Paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha creación: 25/09/2024
// Número de ejercicio: 5
// Problema planteado: Numero perfecto

#include <iostream>
using namespace std;
int sumaDivisores (int);
int main ()
{
    int n;
    cout << "ingrese el numero"<<endl;
    cin >> n;
    if(n == sumaDivisores(n))
    {
        cout << n << " es un numero perfecto";
    } else 
    {
        cout << n << " no es un numero perfecto";
    }
    return 0;
}

int sumaDivisores (int n)
{
    int suma = 0;
    for(int i = 1; i <= n / 2; i++)
    {
        if(n % i == 0)
            suma += i;
    }
    return suma;
}