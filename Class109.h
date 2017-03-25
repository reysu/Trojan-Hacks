#ifndef CLASS109_H
#define CLASS109_H

class Class109 {
	public:
		Class109();

		double returnGrade(double quizGrade, double hwGrade, double midtermGrade, double finalGrade);

	private:
		double quizWeight = 0.20;
		double hwWeight = 0.20;
		double midtermWeight = 0.20;
		double finalWeight = 0.35;

		// Lowest 2 quizzes are dropped

};

#endif