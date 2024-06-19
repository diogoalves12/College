#include <iostream>
using namespace std; 

int main() {
    int n;
    cin >> n;
    
    int letters = 0, digits = 0,  symbols = 0;
    char ch;

    for (int i = 0; i < n ; i++) {
        cin >> ch;
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
            letters++;
        else if ((ch >= '0' && ch <= '9'))
            digits++;
        else
            symbols++;
    }
    cout << letters << " " << digits << " " << symbols;
    return 0;
}