#include <iostream>
#include <fstream>
#include <string>
#include "wc.h"
using namespace std;


wcresult wc(const string& filename){
    ifstream in(filename);
    wcresult r = {0,0,0};

    for(string line; getline(in,line);){
        r.lines++;
        r.bytes += line.length() + 1;
        istringstream iss(line);
        for(string word; iss >> word;){
            r.words++;
        }
    }
    return r;
}