#include <iostream>
#include <cmath> 

using namespace std;

struct Sensor {
    double min; 
    double max; 
    double accuracy; 
    double max_speed; 
};

int main() {
    const int N = 3; 
    Sensor sensors[N]; 
    double min_accuracy = INFINITY; // переменная для хранения минимальной погрешности
    int best_sensor_index = -1; // индекс самого точного датчика

    // Ввод данных о датчиках
    for (int i = 0; i < N; i++) {
        cout << "Enter data for sensor " << i + 1 << ":" << endl;
        cout << "Min value: ";
        cin >> sensors[i].min;
        cout << "Max value: ";
        cin >> sensors[i].max;
        cout << "Accuracy: ";
        cin >> sensors[i].accuracy;
        cout << "Max speed: ";
        cin >> sensors[i].max_speed;
        cout << endl;
    }

    // Поиск самого точного датчика
    for (int i = 0; i < N; i++) {
        if (sensors[i].accuracy < min_accuracy) {
            min_accuracy = sensors[i].accuracy;
            best_sensor_index = i;
        }
    }

    // Вывод данных о самом точном датчике
    cout << "The most accurate sensor is #" << best_sensor_index + 1 << ":" << endl;
    cout << "Min value: " << sensors[best_sensor_index].min << endl;
    cout << "Max value: " << sensors[best_sensor_index].max << endl;
    cout << "Accuracy: " << sensors[best_sensor_index].accuracy << endl;
    cout << "Max speed: " << sensors[best_sensor_index].max_speed << endl;

    return 0;
}
