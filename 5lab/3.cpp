#include <iostream>
#include <cmath>

using namespace std;

int main() {
  double start, end, step;
  cout << "Enter start, end, and step values: ";
  cin >> start >> end >> step;

  for (double x = start; x <= end; x += step) {
    double y = sqrt((1 + 3 * x) / 2) + 3 * x;
    cout << "x = " << x << ", y = " << y << endl;
  }

  return 0;
}
