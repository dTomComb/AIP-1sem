#include <iostream>
#include <string>
using namespace std;

struct Factory {
    string name;
    int age;
    string specialty;
    float salary;
};

const int N = 3;

int main() {
    Factory factories[N];
    for (int i = 0; i < N; i++) {
        cout << "Enter information about factory #" << i + 1 << endl;
        cout << "Name: ";
        getline(cin, factories[i].name);
        cout << "Age: ";
        cin >> factories[i].age;
        cin.ignore(); 
        cout << "Specialty: ";
        getline(cin, factories[i].specialty);
        cout << "Salary: ";
        cin >> factories[i].salary;
        cin.ignore(); 
        cout << endl;
    }

    cout << "Factories with average age greater than 35:" << endl;
    for (int i = 0; i < N; i++) {
        if (factories[i].age > 35) {
            cout << i + 1 << endl;
        }
    }

    return 0;
}