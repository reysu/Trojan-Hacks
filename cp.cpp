#include "cp.h"

CP::CP(int id,string cpName,string user,string pass,
    vector<string> cpCourses){
    idNumber = id;
    cpFullName = cpName;
    username = user;
    pass = pass;
    //initialize the map of all classes
    cpClasses["CSCI104"] = false;
    cpClasses["CSCI170"] = false;
    cpClasses["CSCI103"] = false;
    cpClasses["CSCI109"] = false;
    //update our map of classes the CP is currently cping
    map<string,bool>::iterator it = csClasses.begin();
    for(unsigned int i=0; i < cpCourses.size(); i++){
      it = csClasses.find(cpCourses[i]);
      if(it != csClasses.end()){  //class exists
        csClasses[cpCourses[i]] = true;
      }
    }
}

/* Given an input password, returns true if user can log in */
bool CP::isLogInValid(string inputPassword){
  return inputPassword == password;
}

/* CP's will be able to call this function to give a student a rating */
void CP::rateStudent(vector<Student*> totalStudents, string studentname, int rating)
{
  for(int i = 0; i < totalStudents; i++)
  {
  	if(totalStudents[i]->getName() == studentname)
  	{
  		totalStudents[i]->setRating(rating);
  	}
  }
}

/* Returns CP's current Average Rating */
double CP::getRating(){
    return double(totalRatings)/numRatings;
}

/* returns CP's ID */
int CP::getID()
{
  return idNumber;
}

/* Returns student's username */
string CP::getUsername(){
  return username;
}

/* Get name of student */
string CP::getName()
{
	return cpFullName;
}

/* Set rating of CP by adding to totalRatings and numRatings */
void CP::setRating(int rating)
{
	totalRatings += rating;
	numRatings++;
}

