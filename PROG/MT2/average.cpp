#include "show_file.h"
#include <fstream>
#include <string>
#include <iomanip>
#include <sstream>

using namespace std;

void average(const string& input_fname, const string& output_fname){
    
    ifstream in(input_fname);
    ofstream out(output_fname);
    int lines = 0;

    for(string line; getline(in,line);){
        
        istringstream ss(line);
        
        double n = 0,total = 0,media = 0;
        
        while(ss >> n){
            media += n;
            total++;
        }

        media = media / total;

        out<< fixed << setprecision(3) << media << endl;
        lines++;
    }
    out << "lines=" << lines;
}