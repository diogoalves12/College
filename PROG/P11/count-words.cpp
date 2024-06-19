#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(const pair<string, size_t>& p1, const pair<string, size_t>& p2) {
  return p1.first < p2.first;
}

void show_vector(const vector<pair<string, size_t>>& count) {
  cout << "[ ";
  for (const auto& e : count) {
    cout << e.first << ":" << e.second << ' ';
  }
  cout << "]\n";
}

void count_words(const string& str, vector<pair<string, size_t>>& count){
    istringstream iss(str);
    string word;

    count.clear();

    while( iss >> word) {
        for(char& c : word) c = tolower(c);
        if(count.size() == 0) { count.push_back({word,1});}
        else {
            bool found = false;
            for(auto& elem : count) {
                if(elem.first == word){
                    elem.second += 1;
                    found = true;
                    break;
                }   
            }
            if(!found){
                count.push_back({word,1});
            }
        }
    }
    std::sort(count.begin(), count.end(), compare);
}