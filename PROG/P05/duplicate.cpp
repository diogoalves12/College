#include <iostream>
using namespace std;

char* duplicate(const char s[]){
    int size = 0;
    while(s[size] != 0){
        size++;
    } 
    char* dup = new char[size + 1];

    for(int i = 0; i < size; i++){
        dup[i] = s[i];        
    }
    dup[size] = 0;
    return dup;  
}