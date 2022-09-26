#include <iostream>
/*4. Пользователь вводит два числа. Необходимо поменять значения переменных так, 
чтобы значение первой оказалось во второй, а второй - в первой.*/
using namespace std;
int main ()
{
	int a, b, c;
	
	cout<<"imput a and b"<<endl;
	cin>>a>>b;
	c=b; // меняем местами переменные
	b=a;
	a=c;
	cout<<"a= "<<a<<endl <<"b= "<<b<<endl;
	
	return (0);
}
