#include <iostream>
using namespace std;

int reverse(int num){
    int contrario = 0;
    while(num != 0){
        contrario = contrario * 10 + num % 10;
        num /= 10;
    }
    return contrario;
}

int main(){
    int num;
    cin >> num;
    cout << reverse(num) << endl;
    return 0;
}