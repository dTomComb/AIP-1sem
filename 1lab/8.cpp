/*8. Вычислите значение выражения:
a. (a+4b)(a−3b)+a^2 при a=2 и b=3. Ответ: -94
*/
#include <iostream>
using namespace std;
int main (){
	float a, b;
	cout<<"imput a and b"<<endl;
	cin>>a>>b;
	cout<<(a+4*b)*(a-(3*b))+a*a;
	return (0);
}