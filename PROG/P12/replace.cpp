#include <string>
#include <map>

using namespace std;

void replace(const map<char, char>& r, string& s){

    for(char& c : s) {
        for(auto& elem : r){
            if(c == elem.first){
                c = elem.second;
            }   
        }
    }
}