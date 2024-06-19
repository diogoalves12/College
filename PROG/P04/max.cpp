#include <iostream>
using namespace std;

int max(const int a[], int n){
    int current = a[0];
    for (int i = 1; i < n; i++){
        if (a[i] > current){
            current = a[i];
        }
    }
    return current;
}