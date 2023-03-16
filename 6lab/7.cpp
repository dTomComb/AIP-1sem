#include <iostream>
#include <string>
using namespace std;

struct Factory {
    string name; // фамилия
    int age; // средний возраст
    string specialty; // специальность
    double salary; // средний оклад
};

int main() {
    const int N = 3; // количество заводов
    Factory factories[N]; // создание массива из структур Factory
    
    // ввод информации о заводах
    for (int i = 0; i < N; i++) {
        cout << "Enter information about factory #" << i + 1 << endl;
        cout << "Name: ";
        getline(cin, factories[i].name);
        cout << "Age: ";
        cin >> factories[i].age;
        cin.ignore(); // очистка буфера ввода
        cout << "Specialty: ";
        getline(cin, factories[i].specialty);
        cout << "Salary: ";
        cin >> factories[i].salary;
        cin.ignore(); 
        cout << endl;
    }
    
    // подсчет количества слесарей и токарей
    int num_fitters = 0;
    int num_turners = 0;
    for (int i = 0; i < N; i++) {
        if (factories[i].specialty == "fitter") {
            num_fitters++;
        } else if (factories[i].specialty == "turner") {
            num_turners++;
        }
    }
    
    // вывод результатов
    cout << "Number of fitters: " << num_fitters << endl;
    cout << "Number of turners: " << num_turners << endl;
    
    return 0;
}
