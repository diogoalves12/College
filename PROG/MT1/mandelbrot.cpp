#include <iostream>
#include "complex.h"

using namespace std;

complex add(const complex a, const complex b){
    complex r;
    r.real = a.real + b.real;
    r.img = a.img + b.img;
    return r;
}

complex mul(const complex a, const complex b){
    complex r;
    r.real = (a.real * b.real - a.img * b.img);
    r.img = (a.real * b.img + a.img * b.real);
    return r;
}


void mandel(complex c, int n, complex z[]){
    z[0] = {0,0};
    complex current = z[0];
    for(int i  = 1 ; i < n; i++){
        current = mul(current, current);
        current = add(current,c);
        z[i] = current;
    }
}