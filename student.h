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
    vector<string> currentlyTaking, vector<string> classesCping, bool isCP);
    /* Checks if log in password is valid */
    bool isLogInValid(string inputPassword);
    /* Returns student's grade for given class(Uncurved) */
    double getGrade(string className);
    /* Allows a student to rate a CP */
    void rate(vector<Student*> totalStudents, string CPname, int rating);
    /* Returns the student/CP's average rating */
    double getRating();
    /* Allows student to make reservation with a CP */
    void makeReservation(string CPname, string className, int hour, int min);
    /* returns student/CP's ID */
    int getID();
    /* returns student/CP's username */
    string getUsername();
    /* Get name of student/CP */
    string getName();
    /* Set rating of student/CP */
    void setRating(int rating);

    /* Add grade of student for each class */
    // void addGrade(string, int);

  private:
    /*map of all CS classes, and a bool to indicate whether or not they are
    currently taking that class */
    map<string, bool> csClasses;
    string username;
    string password;
    int idNumber;
    string studentFullName;
    map<string, double> totalCSGrades; // map of class name and grade for that class
    int totalRatings;
    int numRatings;
    bool isCP; // true if CP, false if Student
    /* map of all CS classes, and a bool to indicate whether or not they are currently
    cping that class */
    map<string, bool> cpClasses;
};
