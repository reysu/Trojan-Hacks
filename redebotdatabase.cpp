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

	// Add all students to database of total Students
	totalStudents.push_back(esu);
	totalStudents.push_back(eyu);
	totalStudents.push_back(mark);
	totalStudents.push_back(michael);

	// Creating CPs
	// 103 CP #1: Nicholas Truong
	vector<string> nickClasses;
	vector<string> nickCPClasses;
	nickCPClasses.push_back("CS103");
	map<int, bool> nickCPTimes;
	nickCPTimes.insert(make_pair(800, true));
	nickCPTimes.insert(make_pair(900, true)); // Assuming one day, appointments only schedulable day of
	Student* nick = new Student(4, "Nicholas Truong", "nick", "sup", nickClasses, nickCPClasses, true);
	vector<Student*> nickTimes1;
	nickTimes1.push_back(nick);
	totalTimes.insert(make_pair(800, nickTimes1));
	
	// 103 CP #2: Alex Koh
	vector<string> alexClasses;
	vector<string> alexCPClasses;
	alexCPClasses.push_back("CS103");
	map<int, bool> alexCPTimes;
	alexCPTimes.insert(make_pair(900, true)); // Assuming one day, appointments only schedulable day of
	Student* alex = new Student(5, "Alex Koh", "alex", "yo", alexClasses, alexCPClasses, true);
	vector<Student*> alexTimes1;
	alexTimes1.push_back(nick);
	alexTimes1.push_back(alex);
	totalTimes.insert(make_pair(900, alexTiems1));

	// 109 CP #1: John Doe
	vector<string> johnClasses;
	vector<string> johnCPClasses;
	johnCPClasses.push_back("CS109");
	map<int, bool> johnCPTimes;
	johnCPTimes.insert(make_pair(1000, true)); // Assuming one day, appointments only schedulable day of
	Student* john = new Student(6, "John Doe", "john", "hey", johnClasses, johnCPClasses, true);
	vector<Student*> johnTimes1;
	johnTimes1.push_back(john);
	totalTimes.insert(make_pair(1000, johnTimes1));

	// 104 CP #1: Brandon Cen
	vector<string> brandonClasses;
	vector<string> brandonCPClasses;
	brandonCPClasses.push_back("CS104");
	map<int, bool> brandonCPTimes;
	brandonCPTimes.insert(make_pair(1200, true)); // Assuming one day, appointments only schedulable day of
	brandonCPTimes.insert(make_pair(1230, true));
	Student* brandon = new Student(7, "Brandon Cen", "brandon", "lol", brandonClasses, brandonCPClasses, true);
	vector<Student*> brandonTimes1;
	brandonTimes1.push_back(brandon);
	totalTimes.insert(make_pair(1200, brandonTimes1));

	// 104 CP #2: Ziyan Ma
	vector<string> ziyanClasses;
	vector<string> ziyanCPClasses;
	ziyanCPClasses.push_back("CS104");
	map<int, bool> ziyanCPTimes;
	ziyanCPTimes.insert(make_pair(1230, true)); // Assuming one day, appointments only schedulable day of
	Student* ziyan = new Student(8, "Ziyan Ma", "ziyan", "I love CS104", ziyanClasses, ziyanCPClasses, true);
	vector<Student*> ziyanTimes1;
	ziyanTimes1.push_back(brandon);
	ziyanTimes1.push_back(ziyan);
	totalTimes.insert(make_pair(1230, ziyanTimes1));

	// 104 CP #3: Cynthia Zhang
	vector<string> cynthiaClasses;
	vector<string> cynthiaCPClasses;
	cynthiaCPClasses.push_back("CS104");
	map<int, bool> cynthiaCPTimes;
	cynthiaCPTimes.insert(make_pair(1500, true)); // Assuming one day, appointments only schedulable day of
	Student* cynthia = new Student(9, "Cynthia Zhang", "cynthia", "mergesort", cynthiaClasses, cynthiaCPClasses, true);
	vector<Student*> cynthiaTimes1;
	cynthiaTimes1.push_back(cynthia);
	totalTimes.insert(make_pair(1500, nickTimes1));

	// 170 CP #1: Hemant Kunda
	vector<string> hemantClasses;
	vector<string> hemantCPClasses;
	hemantCPClasses.push_back("CS170");
	map<int, bool> hemantCPTimes;
	hemantCPTimes.insert(make_pair(1600, true)); // Assuming one day, appointments only schedulable day of
	Student* hemant = new Student(10, "Hemant Kunda", "hemant", "gmant", hemantClasses, hemantCPClasses, true);
	vector<Student*> hemantTimes1;
	hemantTimes1.push_back(hemant);
	totalTimes.insert(make_pair(1600, hemantTimes1));

	// Add all CPs to database of total Students
	totalStudents.push_back(nick);
	totalStudents.push_back(alex);
	totalStudents.push_back(john);
	totalStudents.push_back(brandon);
	totalStudents.push_back(ziyan);
	totalStudents.push_back(cynthia);
	totalStudents.push_back(hemant);

	// Add all classes to database of total classes
	totalClasses.push_back("CS103");
	totalClasses.push_back("CS109");
	totalClasses.push_back("CS104");
	totalClasses.push_back("CS170");


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

