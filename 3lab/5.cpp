#include <iostream>
using namespace std;
/*4. Пользователь вводит день месяца. Вывести на экран день недели. Считаем, что 1-е
число месяца это вторник. Модификация задачи 4. Пользователь также вводит число от 1 до 7, обозначающее
номер недели для первого числа месяца.*/
int main(){
	int x, c;
	do{
	cout << "vvedite chislo (1 - 31): " << endl;
	cin >> x;
	cout << "Vvedite nomer dnya (1 - 7): " << endl;
	cin >> c;
	if (x > 0 && x < 32 && c > 0 && c < 8) break;
    }
    while (true);
    x = x / 7 + c - 1;
    if (x > 7) x -= 7;
	switch (x){
		case 1:
		cout << "vtornik" << endl;
		break; 
		case 2:
		cout << "sreda" << endl;
		break;
		case 3:
		cout << "chetverg" << endl;
		break;
		case 4:
		cout << "pyatnica" << endl;
		break;
		case 5:
		cout << "subbota" << endl;
		break;
		case 6:
		cout << "voskresenie" << endl;
		break;
		case 7:
		cout << "ponedelnik" << endl;
		break;
	}
	return (0);
}
