#include "redebotdatabase.h"

using namespace std;

RedebotDatabase::RedebotDatabase() {
	// Creating student users
	vector<string> nonCPClasses;
	// Student #1: Eric Su
	vector<string> esuClasses;
	esuClasses.push_back("CS104");
	esuClasses.push_back("CS170");
	Student* esu = new Student(0, "Eric Su", "esu", "Password", esuClasses, nonCPClasses, false);

	// Student #2: Eric Yu
	vector<string> eyuClasses;
	eyuClasses.push_back("CS104");
	eyuClasses.push_back("CS170");
	Student* eyu = new Student(1, "Eric Yu", "eyu", "Hello", eyuClasses, nonCPClasses, false);

	// Student #3: Mark Redekopp
	vector<string> markClasses;
	markClasses.push_back("CS104");
	Student* mark = new Student(2, "Mark Redekopp", "mark", "Fight On", markClasses, nonCPClasses, false);

	// Student #4: Michael Shindler
	vector<string> michaelClasses;
	michaelClasses.push_back("CS170");
	Student* michael = new Student(3, "Michael Shindler", "michael", "Go Bruins", michaelClasses, nonCPClasses, false);

	/*
	// Creating CPs
	// 103 CP #1: Nicholas Truong
	vector<string> nickClasses;
	vector<string> nickCPClasses;
	nickCPClasses.push_back("CS103");
	map<int, bool> nickCPTimes;
	nickCPTimes.insert(make_pair(1600, ) // Assuming Sunday, appointments only schedulable day of
	Student* eyu = new Student(4, "Nicholas Truong", "nick", "sup", nickClasses, nickCPClasses, true, );
	*/
	
	// 103 CP #2: Alex Koh

	// 109 CP #1: 

	// 104 CP #1:

	// 104 CP #2:

	// 104 CP #3: Cynthia Zhang

	// 170 CP #1: Hemant Kunda

	// 170 CP #2: Quinn Ngo
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

