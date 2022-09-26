/*6. Пользователь вводит три числа. Найдите среднее арифметическое этих чисел, а 
также разность удвоенной суммы первого и третьего чисел и утроенного второго 
числа.*/
#include <iostream>
using namespace std;
int main (){
	float a, b, c, A, B;
	cout<<"imput a and b and c"<<endl;
	cin>>a>>b>>c;
	A = (a+b+c)/3;
	B = (a*2+c*2)-(b*3);
	cout<<"raznost= "<<B<<endl <<"srednee= "<<A<<endl;
	return (0);
}
