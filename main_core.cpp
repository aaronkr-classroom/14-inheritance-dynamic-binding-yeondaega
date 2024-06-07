//main_core.cpp
#include <algorithm>

#include <ios>

#include <iomanip>
#include <iostream>
#include <stdexcept>
#include <vector>
#include <string>

#include "Core.h"

using namespace std;

int main() {
	vector <Core> students; //Core ��ü�� �ش��ϴ� ����� �а� ó��
	Core record;
	string;
    string::size_type maxien = 0;

   //�����͸� �а� �����ϱ�
	while (record.read(cin)) {
		maxien = max(maxien, record. getName().size());
		students.push_back(record);

	}

	//�л� ����� ���ĺ� ������ ����
	sort(students.begin(), students.end(), compare);

	//�̸��� ���� ���
	for (vector<Core>::size_type i = 0; i != students.size(); ++i) {
		cout << students[i].getName()
			<< string(maxien + 1 - students[i].getName().size(), ' ');

		try {
			double final_grade = students[i].grade(); //Core::grade()
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