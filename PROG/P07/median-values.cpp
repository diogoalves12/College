#include "show_file.h"


void calc_medians(const string& input_fname, const string& output_fname){
    ifstream in(input_fname);
    ofstream out(output_fname);
    for(string line; getline(in,line);){
        if(line[0] == '#') continue;
        istringstream iss(line);
        string id;
        iss >> id;
        std::vector<double> d;
        for(double x; iss >> x;){
            d.push_back(x);
        }
        //median
        sort(d.begin(),d.end());
        int n =  d.size();
        double m = n % 2 != 0 ? d[n / 2] : 0.5 * (d[n / 2 - 1] + d[n / 2]);
        out << id << ' ' << fixed << setprecision(1) << m << endl;
    }
}