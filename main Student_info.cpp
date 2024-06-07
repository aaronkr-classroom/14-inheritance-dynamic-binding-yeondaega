#include <algorithm>

#include <ios>

#include <iomanip>
#include <iostream>
#include <stdexcept>
#include <vector>
#include <string>

#include "Student_info.h"

using namespace std;

int main() {
	vector <Student_info> students; //Core ��ü�� �ش��ϴ� ����� �а� ó��
	Student_info record;
	string;
	string::size_type maxien = 0;

	//�����͸� �а� �����ϱ�
	while (record.read(cin)) {
		maxien = max(maxien, record.getName().size());
		students.push_back(record);

	}

	//�л� ����� ���ĺ� ������ ����
	sort(students.begin(), students.end(), Student_info::compare);

	//�̸��� ���� ���
	for (vector<Student_info>::size_type i = 0; i != students.size(); ++i) {
		cout << students[i].getName()
			<< string(maxien + 1 - students[i].getName().size(), ' ');

		try {
			double final_grade = students[i].grade(); //Student_info::grade()
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