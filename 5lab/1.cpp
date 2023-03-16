#include <iostream>
/*Вывести на экран Н строк из нулей, причем количество нулей в каждой строке
равно номеру строки. Количество строк Н вводит пользователь*/
using namespace std;

int main() {
    int N;

    cout << "Enter the number of rows: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "0";
        }
        cout << endl;
    }

    return 0;
}
