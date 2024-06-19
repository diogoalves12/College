#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int count(const string& fname, const string& word){
    ifstream in(fname);
    string word_tc = word;
    int count = 0;
    for(char& c : word_tc){
        c = toupper(c);
    }

    for(string s; in >> s;){
        for( char&c : s){
            c = toupper(c);
        }
        if(s == word_tc){
            count++;
        }
    }
    return count;
}