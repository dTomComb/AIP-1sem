/*5. Пользователь вводит три числа. Увеличьте первое число в два раза, второе число 
уменьшите на 3, третье число возведите в квадрат и затем найдите сумму новых 
трех чисел.*/
#include <iostream>
using namespace std;
int main (){
	float a, b, c, A, B, C;
	cout<<"imput a and b and c"<<endl;
	cin>>a>>b>>c;
	A=a*2;
	B=b-3;
	C=c*c;
	cout<<"a="<<A<<endl <<"b="<<B<<endl <<"c="<<C<<endl;
	cout<<A+B+C<<endl; //складываем в выводе
	return (0);
}