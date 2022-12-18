#include <iostream>
#include <cmath>
//11.2
using namespace std;
int main (){
	float n, b, k, x;
	cout << "vvedite k" << endl;
	cin >> k;
	cout << "vvedite x" << endl;
	cin >> x;
	n=log (M_PI/(k*x-1,6*pow(10, 3)));
	b=sqrt(pow(sin(n), 2) + sin(pow(n, 2)) / (abs(sin(n)) + pow(M_E, -x)));
	cout << n << endl;
	cout << b << endl;
	return (0);
	
}