#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

int main()
{
	double x, y, R, a, b, max;

	srand((unsigned)time(NULL));

	for (int i = 0; i < 10; i++)
	{
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;
		cout << "R = "; cin >> R;
		cout << "a = "; cin >> a;
		cout << "b = "; cin >> b;

		if ((y <= 0 && x <= 0 && y >= -b && x * x + y * y <= R * R) || (x >= 0 && x <= a && y >= 0 && y <= b && x * x + y * y >= R * R))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	cout << endl << fixed;

	for (int i = 0; i < 10; i++)
	{
		if (a >= b && a >= R)
			max = a;
		else if (b >= a && b >= R)
			max = b;
		x = rand() * 2. * max / RAND_MAX - max;
		y = rand() * 2. * max / RAND_MAX - max;

		if ((y <= 0 && x <= 0 && y >= -b && x * x + y * y <= R * R) || (x >= 0 && x <= a && y >= 0 && y <= b && x * x + y * y >= R * R))
			cout << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << " " << "yes" << endl;
		else
			cout << setw(8) << setprecision(4) << x << " "
			<< setw(8) << setprecision(4) << y << " " << "no" << endl;
	}
	return 0;
}