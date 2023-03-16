#include <iostream>
#include <vector>
using namespace std;

// Структура для хранения информации о датчике
struct Sensor {
    double min;
    double max;
    double accuracy;
    double max_speed;
};

int main() {
    // Вектор для хранения информации о датчиках
    vector<Sensor> sensors;

    sensors.push_back({10, 100, 0.1, 20});
    sensors.push_back({20, 200, 0.05, 15});
    sensors.push_back({5, 50, 0.2, 30});

    // Поиск датчика с наименьшей скоростью работы
    Sensor min_speed_sensor = sensors[0];
    for (int i = 1; i < sensors.size(); i++) {
        if (sensors[i].max_speed < min_speed_sensor.max_speed) {
            min_speed_sensor = sensors[i];
        }
    }

    // Вывод информации о найденном датчике
    cout << "Sensor with minimum speed:" << endl;
    cout << "Minimum value: " << min_speed_sensor.min << endl;
    cout << "Maximum value: " << min_speed_sensor.max << endl;
    cout << "Accuracy: " << min_speed_sensor.accuracy << endl;
    cout << "Maximum speed: " << min_speed_sensor.max_speed << endl;

    return 0;
}
