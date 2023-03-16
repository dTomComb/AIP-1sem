#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x, y, step, start, end;

    cout << "Enter the starting value: ";
    cin >> start;

    cout << "Enter the ending value: ";
    cin >> end;

    cout << "Enter the step: ";
    cin >> step;

    x = start;

    while (x <= end) {
        y = sqrt(5 + 4 * x) + 13 * x + cos(12 * x + 91);
        cout << "x = " << x << ", y = " << y << endl;
        x += step;
    }

    return 0;
}
