#include "cdata.h"


int* expand_cdata(const cdata a[], int n){
    int len = 0;
    for(int i = 0; i < n; i++){
        len+= a[i].count;
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

int main() {
    // Example 1
    {
        const int n = 1;
        const cdata a[] = { { 3, 999 } };
        int* r = expand_cdata(a, n);
        print_array(r, 3);
        delete[] r;
    }

    // Example 2
    {
        const int n = 3;
        const cdata a[] = { { 3, 100 }, { 2, 200 }, { 1, 300 } };
        int* r = expand_cdata(a, n);
        print_array(r, 6);
        delete[] r;
    }

    // Example 3
    {
        const int n = 1;
        const cdata a[] = { { 1, 999 } };
        int* r = expand_cdata(a, n);
        print_array(r, 1);
        delete[] r;
    }

    // Example 4
    {
        const int n = 2;
        const cdata a[] = { { 20, 1 }, { 17, 2 } };
        int* r = expand_cdata(a, n);
        print_array(r, 37);
        delete[] r;
    }

    // Example 5
    {
        const int n = 4;
        const cdata a[] = { { 2, 5 }, { 1, 2 }, { 3, 0 }, { 7, -1 } };
        int* r = expand_cdata(a, n);
        print_array(r, 13);
        delete[] r;
    }

    return 0;
}