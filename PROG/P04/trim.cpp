#include <iostream>
using namespace std;

void trim(char s[]){
    int n = 0, firstchar = 0;

    while(s[n] != 0){
        n++;
    }

    while(s[firstchar]==' '){
        firstchar++;
    }

    for( int i = firstchar; i <= n; i++){
        s[i-firstchar] = s[i];
    }

    n -= firstchar; 

    if( n > 0){
        n--;
        
        while(s[n] == ' '){
            n--;          
        }
        s[n + 1] = '\0';   
    }
}   
