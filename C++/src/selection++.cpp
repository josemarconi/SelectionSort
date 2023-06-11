#include "selection++.hpp"
using namespace std;

void Selection::setTamanho(int tamanho){
this->tamanho=tamanho;
}
int Selection::getTamanho(){ 
    return tamanho;
}

void Selection::Ordenacao() {
    vetor = new int[tamanho];
}
        
void Selection::preencher() {
    srand(time(NULL));
    for(int i=0; i<tamanho; i++) {
        vetor[i] = rand() % 150 ;
    }
    cout<<"Numeros gerados aleatoriamente:"<<endl;
    imprimir();
}

void Selection::selectionSort() {
    int i, j, menor, aux;
    for (i = 0; i < tamanho - 1; i++) {
        menor = i;
        for (j = i + 1; j < tamanho; j++)
            if (vetor[j] < vetor[menor])
                menor = j;
            if (menor != i) {
                aux = vetor[i];
                vetor[i] = vetor[menor];
                vetor[menor] = aux;
            }
    }
}   
        
void Selection::imprimir() {
    for(int i=0; i<tamanho; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;
}