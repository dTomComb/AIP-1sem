#include <iostream>

using namespace std;

int main() {
    int n;
    double x, y = 0;
    
    cout << "Enter n: ";
    cin >> n;
    
    cout << "Enter x: ";
    cin >> x;
    
    for (int i = 1; i <= n; i++) {
        y += (-1.0 / i) * x;
    }
    
    cout << "y = " << y << endl;
    
    return 0;
}
