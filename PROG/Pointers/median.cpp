#include <iostream>
#include <algorithm>


int median(const int a[], int n){
    int* tmp = new int[n];

    for(int i = 0; i < n; i++){
        tmp[i] = a[i];
    }
    
    int media = 0;
    std::sort(tmp,tmp + n);
    if(n % 2 == 1){
        media= tmp[n/2];  
    } else if(n % 2 == 0){
        media = (tmp[n /2 - 1] + (tmp[ n / 2])) / 2;
    }
    delete[] tmp;
    return media;
}
