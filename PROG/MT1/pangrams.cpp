#include <iostream>
using namespace std; 


bool pangram(const char s[], char m[]){
    int present[26] = {0};

    for(int i = 0; s[i] != 0; i++){
        char c = s[i];
        if(('a' <= s[i] && s[i] <= 'z') || ('A' <= s[i] && s[i] <= 'Z')){
            int index = c - 'A';
            if( c >= 'a'){
                index = c- 'a';
            }
         present[index] = 1;
        }
    }

    bool panagram = true;
    int mb= 0;
    for(int i = 0; i < 26; i++){
        if(present[i] == 0){
            panagram = false;
            m[mb] = 'a' + i;
            mb++;
        }
    }
    m[mb] = '\0';
    return panagram;
}