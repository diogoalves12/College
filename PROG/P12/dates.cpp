#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
using namespace std;

class Date {
public:
  Date(int year = 1, int month = 1, int day = 1) 
    : year_(year), month_(month), day_(day) {}
  int get_year() const { return year_; }
  int get_month() const { return month_; }
  int get_day() const { return day_; }
private:
  int year_, month_, day_;
};

bool operator<(const Date& date1, const Date& date2){
  int d1 = date1.get_year() * 10000 + date1.get_month() * 100 + date1.get_day();
  int d2 = date2.get_year() * 10000 + date2.get_month() * 100 + date2.get_day();
    return d1 < d2;
}

ostream& operator<< (ostream& os, const Date& date) {
  const char sep = '/';
  os << setw(4) << setfill('0') << date.get_year() << sep <<
         setw(2) << setfill('0') << date.get_month() << sep <<
         setw(2) << setfill('0') << date.get_day();
  return os;
}
