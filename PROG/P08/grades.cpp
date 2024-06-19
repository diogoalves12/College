#include "Student.h"
using namespace std;

Student::Student(const std::string& id) : id_(id) { }

std::string Student::get_id() const {return id_;}

void Student::add(const course& c) {courses_.push_back(c);}

double Student::avg() const{
    double total = 0;
    double total_credits = 0;
    for(auto& course : courses_){
        total += course.grade * course.credits;
        total_credits += course.credits;
    }
    if(total_credits == 0) return (double) 0;
    return total / total_credits;
}       
