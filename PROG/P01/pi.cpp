#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std; 

int main() {
    int k,d;
    cin >> k;
    cin >> d;
    double res = 0.0;

    for (int i = 0; i<=k; i++){
        res = res + pow(-1,i)/(2*i + 1);
    }
    res = 4*res;
    std::cout << std::fixed << std::setprecision(d) << res;
    return 0;
}