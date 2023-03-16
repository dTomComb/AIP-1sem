#include <iostream>

using namespace std;

int main() {
    int n, m, step;
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter m: ";
    cin >> m;
    cout << "Enter step: ";
    cin >> step;

    for (int i = n; i <= m; i += step) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
