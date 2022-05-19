#pragma once 
#include <sstream> 
#include <iostream> 

using namespace std;

class Triad {	//абстрактний клас(базовий клас)  
private:

	double x, y, z, r;

public:
	Triad();
	Triad(double, double, double, double);
	Triad(Triad&, int);

	void SetX(double);
	void SetY(double);
	void SetZ(double);
	void SetR(double);

	double GetX() const;
	double GetY() const;
	double GetZ() const;
	double GetR() const;

	virtual  void Subtraction() = 0;

	virtual Triad* operator - (Triad*) = 0;

	virtual ostream& otput(ostream& out) const = 0;

	virtual istream& entry(istream& in) = 0;
};