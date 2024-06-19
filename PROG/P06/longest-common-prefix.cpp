#include <string>
#include <vector>
#include <iostream>
using namespace std;

string longest_prefix(const vector<string>& v){
    size_t size = v.size(), size_prefix =v[0].length(), temp;
    string prefix = "";
    bool equal = true;
    for(size_t i = 0; i < size; i++){
        temp = v[i].length();
        if(size_prefix > temp){
            size_prefix = temp;
        }
    }

    char current;
    for(size_t i = 0; i < size_prefix; i++){
        current = v[0][i];
        for(size_t j = 0; j < size; j++){
            if(v[j][i] != current){
                equal = false;
                break;            
            }
        }
        
        if(equal){
            prefix += current;
        }
        if(!equal){
            break;
        } 
    }
    return prefix;
}