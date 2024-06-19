#include <string>
#include <vector>
#include <list>
#include <deque>
#include <forward_list>
#include <sstream>

using namespace std;

template <typename Itr> 
string to_string(Itr start, Itr end) {
    string res = "[ ";
    for(Itr i = start; i != end; i++){
        stringstream io;
        string word;
        io << *i;
        getline(io,word);
        res+= word;
        res+= " ";                     
    }
    res += "]";
    return res;
}

template <typename Itr, typename T> 
int replace(Itr start, Itr end, const T& a, const T& b){
    size_t counter = 0;
    for(Itr i = start; i != end; i++){
        if(*i == a){ 
            *i = b;
            counter++;            
        }
    }
    return counter;
}