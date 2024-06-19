#include "Date.h"
#include "Person.h"
#include <vector>

using namespace std;

void born_before(const vector<Person>& persons, const Date& date) 
{
    date.show();
    cout << ": ";

    for(auto i = persons.begin(); i != persons.end(); i++){
        if(i->get_birth_date().is_before(date)){
            if(i == persons.end() - 1) {i->show(); break; }
            i->show();
            cout << " ";
        }
    }
}

