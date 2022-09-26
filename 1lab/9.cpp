/*9. Сделать конвертер величин. Формат ввода: Направление_Перевода Величина.
a. Длина (метры, версты, километры)*/
#include <iostream>
using namespace std;
int main (){
	int asd;
	float A;
	cout<<"Perevod 1.Metr - Verst"<<endl <<"2.Metr - km"<<endl <<"3.Verst - Metr"<<endl <<"4.Verst - km"<<endl <<"5.km - Metr"<<endl <<"6.km - Verst"<<endl;
	
	cin>>asd>>A;
	switch (asd) {
        case 1: 
            cout<<A/1066.8;
            break;
        case 2:
            cout<<A/1000;
            break;
        case 3:
            cout<<A/0.00094;
                break;
        case 4:
            cout<<A/0.94;
                break;
        case 5:
            cout<<A/0.001;
                break;
        case 6:
            cout<<A/1.07;
                break;
    }
	return (0);
}
