#ifndef __STUDENT__GRADE__HEADER
#define __STUDENT__GRADE__HEADER

#include <string>
#include <iostream>

using std::string;
using std::ostream;
using std::istream;

struct Student{
	string name;
	string subject;
	string date;
	unsigned short age;
	unsigned short grade;

	friend ostream& operator<<(ostream& out, const Student& data)
	{
		out << data.name << ',' << data.age << ',' << data.subject
			<< ',' << data.grade << ',' << data.date << '\n';
		return out;
	}

	friend istream& operator>>(istream& in, Student& data)
	{
		string age, grade;

		getline(in, data.name, ',');
		getline(in, age, ',');
		data.age = atoi(age.c_str());
		getline(in, data.subject, ',');
		getline(in, grade, ',');
		data.grade = atoi(grade.c_str());
		getline(in, data.date, '\n');
		return in;
	}
};

#endif
