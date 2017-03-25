#include "student.h"

Student::Student(int id,string studentName,
  string user,string pass, vector<string> currentlyTaking){
    idNumber = id;
    studentFullName = studentName;
    username = user;
    pass = pass;
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
}
/* Given an input password, returns true if user can log in */
bool Student::isLogInValid(string inputPassword){
  return inputPassword == password;
}
/* Returns the student's percentage for a given class (Unscaled)*/
double Student::getGrade(string className){
  map<string, double>::iterator it = totalCSGrades.find(className);
  double studentGrade = 0.0;
  if(it != totalCSGrades.end()){//found
    studentGrade = it->second;
  }
  return studentGrade;
}
/* Should update a CP's rating */
void Student::rateCP(string CPname, int rating){

}
/* Returns student's current Average Rating */
double Student::getRating(){
    return double(totalRatings)/numRatings;

}

/* Allows you to make a reservation with a CP, only on same day*/
void Student::makeReservation(string CPname, string className,
  int hour, int min){

}
/* Returns student's username */
string Student::getUsername(){
  return username;
}
/* CP's will be able to call this function to give a student a rating */
void Student::submitRating(int rating){
  if(rating < 0 || rating > 5){ //invalid rating
    return;
  }
  totalRatings += rating;
  numRatings++;
}
