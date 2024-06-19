#include "print_vector.h"

template <typename T>
void normalise(vector<T>& v, const T& min, const T& max){
    size_ts size = v.size();
    for(size_t i = 0; i < size; i++){
        if(v[i] < min){
            v[i] = min;
        } else if(v[i] > max){
            v[i] = max;
        }
    }
}