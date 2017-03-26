#include <iostream>
#include <string>
#include <cstdlib>
#include <set>
#include <vector>
#include <map>
#include "cp.h"
using namespace std;

class Student{
  public:
    Student(int id,string studentName,string user,string pass,
    vector<string> currentlyTaking);
    /* Checks if log in password is valid */
    bool isLogInValid(string inputPassword);
    /* Returns student's grade for given class(Uncurved)*/
    double getGrade(string className);
    /* Allows a student to rate a CP */
    void rateCP(vector<CP*> totalCPs, string CPname, int rating);
    /* Returns the student's average rating */
    double getRating();
    /* Allows student to make reservation with a CP */
    void makeReservation(string CPname, string className, int hour, int min);
    /* returns student's ID */
    int getID();
    /* returns student's username */
    string getUsername();
    /* Get name of student */
    string getName();
    /* Set rating of student */
    void setRating(int rating);

    /* Add grade of student for each class */
    // void addGrade(string, int);

  private:
    /*map of all CS classes, and an bool to indicate whether or not they are
    currently taking that class */
    map<string, bool> csClasses;
    string username;
    string password;
    int idNumber;
    string studentFullName;
    map<string, double> totalCSGrades; // map of class name and grade for that class
    int totalRatings;
    int numRatings;
};
