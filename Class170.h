#ifndef CLASS170_H
#define CLASS170_H

class Class170 {
	public:
		Class170();

		double returnGrade(double exam1Grade, double exam2Grade, double finalGrade, double hwGrade);

	private:
		double exam1Weight = 0.15;
		double exam2Weight = 0.15;
		double finalWeight = 0.30;
		double hwWeight = 0.40;

	/* 170 Guaranteed Curves
	 * 85%: A
	 * 74%: B
	 * 63%: C
	 */

};

#endif