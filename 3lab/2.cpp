#include <iostream>
#include <cmath>
//1.D Дана функция y=f(x). Найти значение функции по x:
using namespace std;
int main(){
	float y, x;
	cout << "vvedite x" << endl;
	cin >> x;
	if (x > 1) {
	y = 3*x-7;
}
	else if (x == 1){
		y = 3;
}
	 else if (x < 1){
	 	y = 3*abs(x+2)-7;
	 }
	 cout << y << endl;
	 return (0);
}