#include <iostream>
#include <string>
#include <cstdlib>
#include <set>
#include <vector>
#include <map>
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
    void rateCP(string CPname, int rating);
    /* Returns the student's average rating */
    double getRating();
    /* Allows student to make reservation with a CP */
    void makeReservation(string CPname, string className, int hour, int min);
    /* returns student's ID */
    int getID();
    /* returns student's username */
    string getUsername();
    /* Add new rating for student */
    void submitRating(int);
  private:
    /*map of all CS classes, and an bool to indicate whether or not they are
    currently taking that class */
    map<string, bool> csClasses;
    string username;
    string password;
    int idNumber;
    string studentFullName;
    map<string, double> totalCSGrades;
    int totalRatings;
    int numRatings;
};
