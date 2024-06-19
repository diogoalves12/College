#include <iostream>

using namespace std;

const char* longest(const char* pa[]){
    int i = 0, indice_bigger = 0, nmr_c = 0, tamanho_atual = 0, bigger = 0;
    while(pa[i] != nullptr){
        nmr_c = 0;
        tamanho_atual = 0;
        while(pa[i][nmr_c] != 0){
            tamanho_atual++;
            nmr_c++;
        }
        if(tamanho_atual >= bigger){
            indice_bigger = i;
            bigger = tamanho_atual;
        }
        i++;
    }
    return pa[indice_bigger]; 
}