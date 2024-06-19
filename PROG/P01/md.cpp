#include <iostream>
using namespace std;

int distance(int ax, int ay, int bx, int by){
    return abs(ax - bx) + abs(ay - by);
}

int main() {
    int i, ax, ay, bx, by, d = 0;
    cout << i;
    cin >> i;
    cin >> ax >> ay;
    --i;
    while (i)
    {
        --i;
        cin >> bx >> by;
        d += distance(ax, ay, bx, by);
        ax = bx;
        ay = by;
    }
    cout << d << endl;
    return 0;
}