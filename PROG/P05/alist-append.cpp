#include "alist.h"

using namespace std;

void append(alist* a, const alist* b){
    int New_S = a->size + b->size;
    int* New_E = new int[New_S];

    for(int i = 0; i < a->size; i++){
        New_E[i] = a->elements[i];
    }

    for(int i = 0; i < b->size; i++){
        New_E[i+a->size] = b->elements[i];
    }
    delete[] a->elements;

    a->size = New_S;
    a->elements = New_E;
}