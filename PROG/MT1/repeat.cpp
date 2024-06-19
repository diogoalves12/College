#include <iostream>
using namespace std;

char* repeat(const char str[], int n){
    int size = 0;
    while(str[size]) size++; 
    char* tmp = new char[size * n + 1];

    for(int i = 0; i < n; i++){
        for(int j  = 0; j <= size; j++){
            tmp[i * size + j] = str[j];
        }
    }
    tmp[ size * n] = 0;
    return tmp;
}