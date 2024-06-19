#include "show_file.h"

//! Read lines with a series of double values and write corresponding 
//! lines with the median value
void calc_medians(const string& input_fname, const string& output_fname) {
  ifstream in(input_fname);
  ofstream out(output_fname);
  for (string line; getline(in, line); ) { 
    if (line[0] == '#') continue;
    istringstream iss(line);
    string id;         // get id
    iss >> id;
    vector<double> v;  // get doubles
    for (double x; iss >> x; ) v.push_back(x);
    // compute median
    sort(v.begin(), v.end());
    int n = v.size(); 
    double m = n % 2 != 0  ?
      v[n / 2] : 0.5 * (v[n / 2 - 1] + v[n / 2]);
    // write to output file
    out << id  << ' ' << fixed << setprecision(1) << m << '\n';
  }
}