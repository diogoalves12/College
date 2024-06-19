#include "MovingAverage.h"
#include <list>

MovingAverage::MovingAverage(std::size_t n) : n_(n) {}
void MovingAverage::update(double value){
    if(values_.size() == n_) {
        values_.pop_front();
        values_.push_back(value);
    } else {
        values_.push_back(value);
    }
}
double MovingAverage::get() const{
    double total = 0;
    for(double value : values_){
        total += value;
    }
    return total/ values_.size();
}