#include "redebotdatabase.h"

using namespace std;

RedebotDatabase::RedebotDatabase() {

}

RedebotDatabase::~RedebotDatabase()
{

}

void RedebotDatabase::addStudent(Student* student)
{
	totalStudents.insert(student);

}

void RedebotDatabase::addClass(string name)
{
	totalClasses.insert(name);
}