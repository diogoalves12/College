#include <iostream>

using namespace std;

const char* longest(const char* pa[]){
    int i = 0, j = 0, k = 0, n = 0, kn = 0;
    while(pa[i] != nullptr){
        j = 0;
        n = 0;
        while(pa[i][j] != 0){
            n++;
            j++;
        }
        if(n >= kn){
            k = i;
            kn = n;
        }
        i++;
    }
    return pa[k];
}