#include <iostream>
#include <string>
#include <cstdlib>
#include <set>
#include <vector>
#include <map>
using namespace std;

Class Student{
  public:
    Student()
    bool isLogInValid();
    string getGrade(string className); //returns curved grades
    void rateCP(string CPname, int rating);// updates CP rating
    double getRating(); //returns student's current grade
    //allows you make a reservation day of
    void makeReservation(string CPname, string className, int hour, int min);
  private:
    //map of all CS classes, and an bool to indicate whether or not they are
    //currently taking that class
    map<string className, bool currentlyTaking> csClasses;
    string username;
    string password;
    map<string className, double grade> totalCSGrades;
    int totalRatings;
    int numRatings;
}
