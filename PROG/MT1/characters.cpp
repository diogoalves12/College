#include <iostream>

using namespace std;

int main(){

    char c;
    cin >> c;

    if(('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z')){
        cout << "LETTER" << endl;
    } else if( '0' <= c && c <= '9'){
        cout << "DIGIT" << endl;
    } else {
        cout << "OTHER" << endl;
    }
    return 0;
}   