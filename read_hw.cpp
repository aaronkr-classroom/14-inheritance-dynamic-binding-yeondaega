//read_hw.cpp
#include <iostream>
#include <vector>

using namespace std;

istream& read_hw(istream& in, vector<double>& hw) {
	if (in) {
		hw.clear();

		double x;
		while (in >> x)
			hw.push_back(x);

		in.clear();
	}
	return in;
}