#include <map> 
#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

void show_map(const map<string, size_t>& count) {
  cout << "[ ";
  for (const auto& e : count) {
    cout << e.first << ":" << e.second << ' ';
  }
  cout << "]\n";
}

void count_words(const string& str, map<string, size_t>& count){
    string copy_str =  str;
    istringstream iss(copy_str);
    string word;

    count.clear();
    while(iss >> word){
        for(char& c : word) c = tolower(c);
        ++count[word];
    }
}
