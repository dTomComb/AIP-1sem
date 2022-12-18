#include <iostream>
#include <cmath>
/*2.б Напишите программу, которая принимает от пользователя координаты точки и
определяет, попала ли точка в заштрихованную область.*/

using namespace std;

int main()
{
    float y, x;
    cout << "Vvedite x: ";
    cin >> x;
    cout << "Vvedite y: ";
    cin >> y;
    if ( y <= sin(x) && y <= 0.5 && y >= 0) {
        cout << "Prinadlejit";
    } 
    
    else {
        cout << "Ne Prinadlejit";
    }
    
    
    
    return 0;
}