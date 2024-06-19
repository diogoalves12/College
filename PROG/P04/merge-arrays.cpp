#include <iostream>
#include "print_array.h"
using namespace std;

int* merge_arrays(const int a[], int na, const int b[], int nb){
    int* c = new int[na+nb];
    int i = 0, j = 0;
    for (int k = 0; k < nb+na; k++){
        if (i < na){
            if (j < nb){
                if (a[i] < b[j]){
                    c[k] = a[i];
                    i++;
                }
                else{
                    c[k] = b[j];
                    j++;
                }

            } else{
                c[k] = a[i];
                i++;
            }
        } else{
            c[k] = b[j];
            j++;
        }
    }
    return c;
}