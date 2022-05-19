#include "Triad.h" 

Triad::Triad() : x(0), y(0), z(0), r(0) {}
Triad::Triad(double x, double y, double z, double r) : x(x), y(y), z(z), r(r) {}
Triad::Triad(Triad& D, int) {

	x = D.x;

	y = D.y;

	z = D.z;

	r = D.r;

}

void Triad::SetX(double value) { x = value; }
void Triad::SetY(double value) { y = value; }
void Triad::SetZ(double value) { z = value; }
void Triad::SetR(double value) { r = value; }

double Triad::GetX() const { return x; }
double Triad::GetY() const { return y; }
double Triad::GetZ() const { return z; }
double Triad::GetR() const { return r; }