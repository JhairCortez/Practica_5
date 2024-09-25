// Materia: Programación I, Paralelo 1
// Autor: Jhair Anderson Cortez Peña
// Fecha creación: 25/09/2024
// Número de ejercicio: 10
// Problema planteado: Triangulo de pascal

#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> pascal(int n);
void imprimir(vector<vector<int>>);

int main ()
{
    int n;
    cout << "Ingrese el valor de n"<<endl;
    cin>> n;
    vector<vector<int>> pas;
    pas = pascal(n);
    imprimir(pas);
    return 0;
}

vector<vector<int>> pascal (int n)
{
    vector<vector<int>> p;
    for(int i = 1; i <= n; i++){
        vector<int> fila;
        for(int j = 0; j < i; j++){
            if(j == 0 || j == i - 1)
            {
                fila.push_back(1);
            } else 
            {
                int valor = p[i-2][j] + p[i-2][j-1];
                fila.push_back(valor);
            }
        }
        p.push_back(fila);
    }
    return p;
}

void imprimir(vector<vector<int>> triangulo)
{
    for(vector<int> fila : triangulo){
        for(int i : fila){
            cout << i << "\t";
        }
        cout << endl;
    }
}