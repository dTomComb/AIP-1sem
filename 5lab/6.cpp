#include <iostream>
using namespace std;

int main() {
    int num, x, sum = 0;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Enter a value for x: ";
    cin >> x;
    
    for (int i = 1; i <= num; i++) {
        sum += i*x;
    }
    cout << "y = " << sum << endl;

    return 0;
}
