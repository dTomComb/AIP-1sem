#include <iostream>
#include <cmath>
//1.H Дана функция y=f(x). Найти значение функции по x:
using namespace std;
int main(){
	float y, x;
	cout << "vvedite x" << endl;
	cin >> x;
	if (x > 3) {
	y = 2*x-10;
}
	else if (3 == x){
		y = 10;
}
	 else if (x < 3){
	 	y = pow(2*x+1, 2)-1;
	 }
	 cout << y << endl;
	 return (0);
}