#include <vector>
#include <string>
#include <iostream>
#include <algorithm>


using namespace std;


template<typename T1, typename T2> 
class Pair
{
public:
    Pair(const T1& first, const T2& second) : first_(first), second_(second) {}
    T1 get_first() const {return first_;}
    T2 get_second() const { return second_;}
    void show() const { cout << '{' << first_ << ',' << second_ << '}';}
private:
    T1 first_;
    T2 second_;
};

bool compare_func1(const Pair<string, int>& p1, const Pair<string, int>& p2){
    return p1.get_first() < p2.get_first();
}

bool compare_func2(const Pair<string, int>& p1, const Pair<string, int>& p2){
    return p1.get_second() < p2.get_second();
}

void sort_by_second(vector<Pair<string,int>>& v){
    sort(v.begin(), v.end(), compare_func2);
}

void sort_by_first(vector<Pair<string,int>>& v){
    sort(v.begin(), v.end(), compare_func1);
}

void  show(const vector<Pair<string,int>>& v){
    cout << '{';
    for(auto& p : v){
        p.show();
    }
    cout << '}';
}