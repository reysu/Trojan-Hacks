#include "redebotdatabase.h"

using namespace std;

RedebotDatabase::RedebotDatabase() {

}

RedebotDatabase::~RedebotDatabase()
{
	// Delete memory in vector of total Students.
	for(unsigned int i = 0; i < totalStudents.size(); i++)
	{
		delete totalStudents[i];
	}
}

void RedebotDatabase::addStudent(Student* student)
{
	totalStudents.push_back(student);
}

void RedebotDatabase::addClass(string name)
{
	totalClasses.push_back(name);
}

vector<Student*> RedebotDatabase::getTotalStudents()
{
	return totalStudents;
}

vector<string> RedebotDatabase::getTotalClasses()
{
	return totalClasses;
}

