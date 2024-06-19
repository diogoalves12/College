#include <map>
#include <list>
#include <string>

using namespace std;

string student_highest_avg(map<string, list<int>> m){
    string best = "";
    double highest_avg = 0;
    for(auto elem : m){
        double total = 0;
        double current_avr = 0;
        for(double grade : elem.second){
            total += grade;
        }
        current_avr = total / elem.second.size();
        if(current_avr > highest_avg){
            highest_avg = current_avr;
            best = elem.first;
        }
    }
    return best;
}