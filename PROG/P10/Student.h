#ifndef __Student_H__
#define __Student_H__
#include "Person.h"

class Student : public Person
{
public:
    Student(int id, const string& name, const string& course) : Person(id,name), course_(course) { }
    const string& course() const{ return course_; }
    string to_string() const override {
        ostringstream out;
        out << Person::to_string() << '/' << course_;
        return out.str();
    }
private:
    string course_;


};



#endif