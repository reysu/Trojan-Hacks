#include <iostream>
#include <string>
#include <cstdlib>
#include <set>
#include <vector>
#include <map>
using namespace std;

class CP{
  public:
    CP(int id,string cpName,string user,string pass,
    vector<string> cpCourses);
    /* Checks if log in password is valid */
    bool isLogInValid(string inputPassword);
    /* Allows a CP to rate a student */
    void rateStudent(set<string> totalStudents, string studentname, int rating);
    /* Returns the CP's average rating */
    double getRating();
    /* returns CP's ID */
    int getID();
    /* returns CP's username */
    string getUsername();
    /* Get name of student */
    string getName();
    /* Set rating of CP by adding to totalRatings and numRatings */
    void setRating(int rating);

  private:
    /*map of all CS classes, and an bool to indicate whether or not they are
    currently the CP of that class */
    map<string, bool> cpClasses;
    string username;
    string password;
    int idNumber;
    string cpFullName;
    int totalRatings;
    int numRatings;
};
