#include <iostream>
#include <math.h>

using namespace std;
double k(double x, double y)
{
	double result = sin(x) / (pow(x, 2) + pow(y, 2)) + cos(y) / (1 + abs(x * y));
	return result;
}

int main()
{
	double p, q;
	cout << "p = ";
	cin >> p;
	cout << "q = ";
	cin >> q;

	double res = (k(1 + pow(p, 2), 1 - pow(q, 2)) - pow(k(1, p * q), 2)) / (1 + k(p * q, 1));
	cout << "res = " << res;
}
