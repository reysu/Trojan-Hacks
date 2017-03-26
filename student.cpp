#include "student.h"

Student::Student(int id,string studentName,
  string user,string pass, vector<string> currentlyTaking, vector<string> classesCping, bool isCP){
    idNumber = id;
    studentFullName = studentName;
    username = user;
    pass = pass;
    isCP = isCP;
    //initialize the map of all classes
    csClasses["CSCI104"] = false;
    csClasses["CSCI170"] = false;
    csClasses["CSCI103"] = false;
    csClasses["CSCI109"] = false;
    //update our map of classes the user is currently taking
    map<string,bool>::iterator it = csClasses.begin();
    for(unsigned int i=0; i < currentlyTaking.size(); i++){
      it = csClasses.find(currentlyTaking[i]);
      if(it != csClasses.end()){  //class exists
        csClasses[currentlyTaking[i]] = true;
      }
    }

    // If student is CP
    if(isCP == true)
    {
      map<string,bool>::iterator it2 = cpClasses.begin();
      for(unsigned int i=0; i < classesCping .size(); i++)
      {
        it = cpClasses.find(classesCping[i]);
        if(it != cpClasses.end())
        {  //class exists
          cpClasses[classesCping[i]] = true;
        }
      }
    }
}

/* Given an input password, returns true if user/CP can log in */
bool Student::isLogInValid(string inputPassword){
  return inputPassword == password;
}
/* Returns the student's percentage for a given class (Unscaled)*/
double Student::getGrade(string className){
  // Everyone is student and gets grades (CP could be taking 104, 170 courses)
    map<string, double>::iterator it = totalCSGrades.find(className);
    double studentGrade = 0.0;
    if(it != totalCSGrades.end()){ // found
    studentGrade = it->second;
  return studentGrade;
}
}
/* Updates a Student/CP's rating */
void Student::rate(vector<Student*> totalStudents, string name, int rating){
  for(unsigned int i = 0; i < totalStudents.size(); i++)
  {
    if(totalStudents[i]->getName() == name)
    {
      totalStudents[i]->setRating(rating);
    }
  }
}
/* Returns student/CP's current Average Rating */
double Student::getRating(){
    return double(totalRatings)/numRatings;
}

/* Allows you to make a reservation with a CP, only on same day*/
void Student::makeReservation(, string CPname, string className,
  int time){
  /*
  // Check if student: student only feature
  if(isCP == false)
  {
    map<int,vector<Student*> >::iterator it = find(time);
    if(it != totalTimes.end())
    {
      vector<Student*> temp = it->second;
      for(int i = 0; i < temp.size(); i++)
      {
        if()
      }
    }

  }
  */
}

/* returns student/CP's ID */
int Student::getID()
{
  return idNumber;
}

/* Returns student/CP's username */
string Student::getUsername(){
  return username;
}

/* Get name of student/CP */
string Student::getName() {
  return studentFullName;
}

/* Set rating of student/CP */
void Student::setRating(int rating) {
  totalRatings += rating;
  numRatings++;
}
