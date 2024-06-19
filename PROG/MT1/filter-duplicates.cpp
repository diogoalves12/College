#include <iostream>
#include "print_array.h"
using namespace std;


int filter_duplicates(const int a[], int n, int b[]){
    int current = 0;
    int copied = 0;
    for(int i = 0; i < n; i++){
        if(a[i] != current || i == 0){
            b[copied] = a[i];
            current = a[i];
            copied++;
        }
    }
    return copied;
}