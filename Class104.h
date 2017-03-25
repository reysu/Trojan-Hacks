#ifndef CLASS104_H
#define CLASS104_H

class Class104 {
	public:
		Class104();

		double returnGrade(double hwGrade, double labGrade, double midtermGrade, double finalGrade);

	private:
		double hwWeight;
		double labWeight;
		double midtermWeight;
		double finalWeight;

	/* Guaranteed Curves
	 * 85%: A
	 * 80%: A-
	 * 75%: B+
	 * 70%: B
	 * 65%: B-
	 * 60%: C+
	 * 55%: C
	 * 50%: C-
	 * 40%: D
	 */

};

#endif