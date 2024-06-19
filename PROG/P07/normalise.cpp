#include <iostream>
#include <fstream>
#include <string>
#include "print.h"
  
  
using namespace std;

void normalise(const string& input_fname, const string& output_fname){
    ifstream in(input_fname);
    ofstream out(output_fname);

    for(string line; getline(in, line);){
        line.erase(0, line.find_first_not_of(' '));
        line.erase(line.find_last_not_of(' ') + 1);

        for(char&c : line){
            c = toupper(c);
        }
        if(line.length() > 0){
            out << line << '\n';
        }   
    }
}