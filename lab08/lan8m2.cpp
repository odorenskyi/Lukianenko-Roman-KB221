#include <iostream>
#include <cmath> 
using namespace std;

int main() {
	double x, y, z, s;
	cout << "Введіть значення x, y та z: ";
	cin >> x >> y >> z;

	s = (z + 2 * pow(y, 2) / log(x - y)) + sqrt(M_PI * x);

	cout << "s = " << s << endl;
	return 0;
}