#include "interval.h"
#include <iostream>

using namespace std;

bool maior_menor(time_of_day a, time_of_day b){
        if (a.h > b.h){
            return true;
        } else if (a.h == b.h){
            if ( a.m >= b.m){
                return true;
            } else{
                return false;
            }
        } else {
            return false;
        }
}

interval intersection(interval a, interval b){
    time_of_day start, end;
    if (maior_menor(a.start,b.end) || maior_menor(b.start,a.end)){
        return {{00,00},{00,00}};
    } else {
        if(maior_menor(a.start,b.start)){
            start = a.start;
        } else {
            start = b.start;
        }
        if(!maior_menor(a.end,b.end)){
            end = a.end;
        } else {
            end = b.end;
        }    
    }
    return {start,end};
}