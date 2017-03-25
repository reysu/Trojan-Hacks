#include "Class104.h"

using namespace std;

Class104::Class104() {
	hwWeight = 0.40;
	labWeight = 0.05;
	midtermWeight = 0.25;
	finalWeight = 0.30;
}

/*
 * Returns current calculated overall grade in CSCI 104.
 * -1 if student has not completed all of assignments
 */
double Class104::returnGrade(double hwGrade, double labGrade, double midtermGrade, double finalGrade)
{
	double totalGrade = 0.0;
	double overallGrade = 0.0;
	int totalPercent = 0;

	if(hwGrade != -1)
	{
		totalPercent += (hwWeight)*(100);
	}
	if(labGrade != -1)
	{
		totalPercent += (labWeight)*(100);
	}
	if(midtermGrade != -1)
	{
		totalPercent += (midtermWeight)*(100);
	}
	if(finalGrade != -1)
	{
		totalPercent += (finalWeight)*(100);
	}

	totalGrade = (hwWeight)*(hwGrade) + (labWeight)*(labGrade) + (midtermWeight)*(midtermGrade) + (finalWeight)*(finalGrade);
	overallGrade = totalGrade / totalPercent;

	return overallGrade*100;
}
