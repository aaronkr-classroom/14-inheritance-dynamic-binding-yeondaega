//Grad.cpp

#include <algorithm>
#include "grade.h"



istream& read_hw(istream& in, vector<double>& hw);

istream& Grad::read(istream& in) {
	Core::read_common(in);
	in >> thesis;
	read_hw(in, Core::homework);
	return n;
}
double Grad::grade() const {
	return min(Core::grade(), thesis);
}