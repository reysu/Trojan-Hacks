#ifndef CLASS103_H
#define CLASS103_H

class Class103 {
	public:
		Class103();

		double returnGrade(double hwGrade, double labGrade, double paGrade, double wmGrade, double pmGrade, double finalGrade);

	private:
		double hwWeight = 0.05;
		double labWeight = 0.10;
		double paWeight = 0.30;
		double betterWeight = 0.20; // Better of written/programming midterm: 20%
		double worseWeight = 0.10; // Worse of writte/programming midterm: 10%
		double finalWeight = 0.25;

		// lowest lab is dropped

};

#endif