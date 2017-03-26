#ifndef REDEBOTDATABASE_H
#define REDEBOTDATABASE_H

#include <map>
#include <set>
#include "student.h"
class RedebotDatabase {
public:
	RedebotDatabase();
	~RedebotDatabase();

	void addStudent(Student* student);
	void addClass(string name);

private:
	// Set of total students
	std::set<Student*> totalStudents;
	// Set of all classes: CS103, CS109, CS104, CS170
	std::set<string> totalClasses;


};

#endif