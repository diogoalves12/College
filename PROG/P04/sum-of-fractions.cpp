#include <iostream>
#include "fraction.h"
using namespace std;

int gcd_rec(int a, int b){
    if(b == 0){
        return a;
    }
    return gcd_rec(b,a%b);
}

int gcd(int a, int b){
    int temp;
    if(a < 0){
        a = -a;
    }
    if(b < 0){
        b = -b;
    }
    if(b > a){
        temp = a;
        a = b;
        b = temp;
    }
    return gcd_rec(a,b);
}

fraction add(fraction a, fraction b){
    fraction res;
    int div;
    res.num = a.num * b.den + b.num*a.den;
    res.den = a.den * b.den;
    div = gcd(res.num,res.den);
    res.num /= div;
    res.den /= div;
    return res;
}

fraction sum(const fraction fa[], int n){
    fraction a, b;
    a = fa[0];
    for (int i = 1; i < n; i++){
        b = fa[i];
        a = add(a,b);
    }
    return a;
}
 