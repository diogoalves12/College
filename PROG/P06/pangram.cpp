#include <string>
using namespace std;

bool pangram(const string& s, string& m){
    char count[26] = {0};
    int size = s.length();
    for(int i = 0; i < size; i++){
        char c = s[i];
        if(c != ' '){
            if(c >= 'a' && c <= 'z'){
                count[c - 'a']++;
            }
            if(c >= 'A' && c <= 'Z'){
                count[c - 'A']++;
            }            
        }
    }

    for(int i = 0; i < 26;i++){
        if(count[i] == 0){
            char c = 'a' + i;
            m.push_back(c);
        }
    }
    return m.empty();
}