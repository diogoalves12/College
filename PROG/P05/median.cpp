#include <iostream>
#include <algorithm>
using namespace std;

int median(const int a[], int n){
    int* tmp = new int[n];
    for (int i = 0; i < n; i++){
        tmp[i] = a[i];
    }
    int res = 0;
    sort(tmp,tmp + n);
    if( n % 2 == 0){
        res = (tmp[n/2 - 1] + tmp[n/2]) / 2;
    } else if ( n % 2 == 1){
        res = tmp[n/2];
    }
    delete [] tmp;
    return res;
}
