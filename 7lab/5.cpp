#include <iostream>

struct RobotAirplane {
    double rotor_speed; 
    double rotor_radius; 
    double lift_coefficient; 
};

// Функция для расчёта тяги, создаваемой винтом
double calculateThrust(RobotAirplane airplane) {
    return airplane.rotor_speed * airplane.rotor_radius * airplane.lift_coefficient;
}

int main() {
    RobotAirplane airplane;

    // Вводим данные о роботе-самолете
    std::cout << "Enter rotor speed: ";
    std::cin >> airplane.rotor_speed;

    std::cout << "Enter rotor radius: ";
    std::cin >> airplane.rotor_radius;

    std::cout << "Enter lift coefficient: ";
    std::cin >> airplane.lift_coefficient;

    // Вычисляем и выводим тягу, создаваемую винтом
    double thrust = calculateThrust(airplane);
    std::cout << "Thrust created by the rotor is: " << thrust << std::endl;

    return 0;
}
