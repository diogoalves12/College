#include "show_file.h"
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

void maximum(const string& input_fname, const string& output_fname)
{
    ifstream in(input_fname);
    ofstream out(output_fname);
    double num;
    int count = 0;
    double max = -1000;
    while (in >> num)
    {
        count++;
        if(num > max)
        {
            max = num;
        }

        out << fixed << setprecision(3) << num << endl;
    }
    out << "count=" << count << "/max=" << max<< endl;
}