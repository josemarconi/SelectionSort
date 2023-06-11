#ifndef __SELECTION_HPP 
#define __SELECTION_HPP 
#include <iostream>
#include <algorithm>
#include <time.h>

class Selection { 
    private:
        int *vetor;
        int tamanho;
    public:
        void Ordenacao();
        void preencher();
        void selectionSort();
        void imprimir();

        void setTamanho(int tamanho);
        int getTamanho();
};
#endif