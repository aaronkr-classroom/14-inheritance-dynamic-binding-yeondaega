//main_grad.cpp
#include <algorithm>

#include <ios>

#include <iomanip>
#include <iostream>
#include <stdexcept>
#include <vector>
#include <string>

#include "Grad.h"

using namespace std;

int main() {
	vector <Grad> students; //������ Ÿ�� ����
	Grad record; //read �Լ��� ���� Ÿ�� ����
	string;
	string::size_type maxien = 0;

	//�����͸� �а� �����ϱ�
	while (record.read(cin)) { //Core ��ü�� �ƴ� Grad ��ü�� ����
		maxien = max(maxien, record.getName().size());
		students.push_back(record);

	}

	//�л� ����� ���ĺ� ������ ����
	sort(students.begin(), students.end(), compare);

	//�̸��� ���� ���
	for (vector<Grad>::size_type i = 0; i != students.size(); ++i) {
		cout << students[i].getName()
			<< string(maxien + 1 - students[i].getName().size(), ' ');

		try {
			double final_grade = students[i].grade(); //Grad::grade()
			streamsize prec = cout.precision();
			cout << setprecision(3) << final_grade
				<< setprecision(prec) << endl;

		}
		catch (domain_error e) {
			cout << e.what() << endl;
		}
		return 0;
	}
}