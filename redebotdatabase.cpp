#include "redebotdatabase.h"

using namespace std;

RedebotDatabase::RedebotDatabase() {

}

RedebotDatabase::~RedebotDatabase()
{

}

void RedebotDatabase::addStudent(Student* student)
{
	totalStudents.push_back(student);
}

void RedebotDatabase::addCPs(CP* cp)
{
	totalCPs.push_back(cp);
}

void RedebotDatabase::addClass(string name)
{
	totalClasses.push_back(name);
}

vector<Student*> RedebotDatabase::getTotalStudents()
{
	return totalStudents;
}

vector<CP*> RedebotDatabase::getTotalCPs()
{
	return totalCPs;
}

vector<string> RedebotDatabase::getTotalClasses()
{
	return totalClasses;
}

