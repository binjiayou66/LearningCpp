#include <iostream>
#include <cmath>
using namespace std;

struct rect
{
	double x;
	double y;
};

struct polar
{
	double distance;
	double angle;
};

polar rect_to_polar(rect a_rect);
void show_polar(polar a_polar);

int main()
{
	rect a_rect = {45, 45};
	polar a_polar = rect_to_polar(a_rect);
	show_polar(a_polar);

	return 0;
}

polar rect_to_polar(rect a_rect)
{
	polar a_polar;
	a_polar.distance = sqrt(a_rect.x * a_rect.x + a_rect.y * a_rect.y);
	a_polar.angle = atan2(a_rect.x, a_rect.y);

	return a_polar;
}

void show_polar(polar a_polar)
{
	const double Rad_to_deg = 57.29577951;
	cout << "distance == " << a_polar.distance << endl;
	cout << "angle == " << a_polar.angle * Rad_to_deg << "° " << endl;
}