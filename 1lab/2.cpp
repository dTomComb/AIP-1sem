//2. Пользователь вводит параметры фигуры. Найти периметр и площадь фигуры Салинон
#include <iostream>
#include <cmath>
using namespace std; //Убрать вонючее std::
int main ()
{
	float a, b, P, S; //даем переменные
	
	cout <<"Imput a and b"<<endl; //вывести текст
	cin >> a >> b; //вводим переменную
	
	P = 2*3.14*a; //перемножаем в P
	S = 0.25*3.14*pow((a+b),2);
	cout <<"P="<<P<<endl; //выводим результат
	cout <<"S="<<S<<endl;

	return (0);
}