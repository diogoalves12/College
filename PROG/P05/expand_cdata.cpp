#include <iostream>
#include "cdata.h"

using namespace std;

int* expand_cdata(const cdata a[], int n){
    int len = 0;
    for (int i = 0; i < n; i++){
        len += a[i].count;
    }

    int* r = new int[len];
    int index = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < a[i].count; j++){
                r[index] = a[i].value;
                index++;
            }
        }
    return r;
    }


