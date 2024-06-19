#include <iostream>
using namespace std;

bool primo(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i*i <= n; ++i) {
        if (n % i == 0){
            return false;
        }
    }
    return true;
}

bool Pernicious(int n) 
{
    int count = 0;
    while(n)
    {
        count += n & 1;
        n>>= 1;
    }
    return primo(count);
}

int main()
{
    int a,b;
    cin >> a >> b;

    for (int i = a; i <= b; i++)
    {
        if (primo(i) and Pernicious(i))
            cout << i <<" ";
    }
    return 0;
}