#include "complex.h"
#include <iostream>
#include <cmath>
using namespace std;


void add(const complex& a, const complex& b, complex& r){
    r.x = a.x + b.x;
    r.y = a.y + b.y;
}

void mul(const complex& a, const complex& b, complex& r){
    r.x = (a.x*b.x - a.y*b.y);
    r.y = (a.x*b.y + a.y*b.x);
}

double norm(const complex& c){
    return(sqrt(c.x*c.x + c.y*c.y));

}

void mandelbrot(const complex& c, unsigned int n, complex& z_n){
    complex first;
    if(n == 0){
        z_n.x = 0;
        z_n.y = 0;
    } else {
        mandelbrot(c,n-1,z_n);
        mul(z_n,z_n,first);
        add(first,c,z_n);
    }
}