#include "selection++.hpp"
using namespace std;
int main() {

    Selection metodo;
    metodo.setTamanho(15);
    metodo.Ordenacao();
    metodo.preencher();
    metodo.selectionSort();
    cout<<"Numeros ordenados:"<<endl;
    metodo.imprimir();
    return 0;
}