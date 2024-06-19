#include <iostream>
using namespace std;

int nrl(const char s[], char low[]){
    int count[26] = {0};
    int temp;

    for (int i = 0; s[i] != '\0'; i++){
        if (s[i] < 'a'){
            temp = int(s[i]) - 65; 
        } else {    
            temp = int(s[i]) - 97;
        }
        count[temp]++;

    }
    int i = 0;
    for (int j = 0; j < 26; j++){
        if (count[j] == 1){
            low[i] = char(j + 97);
            i++;
        }
    }
    
    low[i] = char(0);
    return i;     
}