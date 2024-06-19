#include "alist.h";

using namespace std;

void append(alist* a, const alist* b){
    int total_size = a->size + b->size;
    int* new_e = new int [total_size];

    for(int i = 0; i < a->size; i++){
        new_e[i] = a->elements[i];
    }

    
    for(int i = 0; i < b->size; i++){
        new_e[i] = b->elements[i];
    }

    delete [] a->elements;

    a->size = total_size;
    a->elements = new_e;    
}