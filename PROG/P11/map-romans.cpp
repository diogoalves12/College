#include <iostream>
#include <map>
#include <vector>
#include <utility>

using namespace std;

unsigned roman_to_arab(const string& roman){

    vector<pair<char, unsigned>> roman_to_int = {
    {'I', 1},
    {'V', 5},
    {'X', 10},
    {'L', 50},
    {'C', 100},
    {'D', 500},
    {'M', 1000}
    };

    unsigned value = 0;

    map<char,unsigned> conv(roman_to_int.begin(), roman_to_int.end());

    for(size_t i = 0; i < roman.length(); i++){
        char c_atual = roman[i];
        char c_next;
        unsigned value1 = conv[c_atual];
        unsigned value2;

        if(i + 1 < roman.length()){
            c_next = roman[i + 1];
            value2 = conv[c_next];
            if(value1 < value2){
                value += (value2 - value1);
                i++;
            } else {
                value += value1;
            }
        } else {
            value += value1;
        }
    }
    return value;
}   