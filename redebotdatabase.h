#ifndef REDEBOTDATABASE_H
#define REDEBOTDATABASE_H

#include "student.h"

#include <map>
#include <set>
#include <vector>

class RedebotDatabase {
public:
	RedebotDatabase();
	~RedebotDatabase();

	void addStudent(Student* student);
	void addClass(string name);

	vector<Student*> getTotalStudents();
	vector<string> getTotalClasses();

private:
	// Vector of total students
	std::vector<Student*> totalStudents;
	// Vector of all classes: CS103, CS109, CS104, CS170
	std::vector<string> totalClasses;

	map<int,vector<Student*> > totalTimes;  // appoint times: map of times to CPs available during those times (Military Time)

};

#endif