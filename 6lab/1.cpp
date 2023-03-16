#include <iostream>
#include <cstdlib>
#include <ctime>
//Сгенерировать массив со случайными числами в диапазоне: [0,10]
int main() {
    const int ARRAY_SIZE = 10;
    int array[ARRAY_SIZE];

    // Инициализация генератора случайных чисел
    std::srand(std::time(0));

    // Заполнение массива случайными числами в диапазоне [0, 10]
    for (int i = 0; i < ARRAY_SIZE; i++) {
        array[i] = std::rand() % 11;
    }

    // Вывод массива на экран
    std::cout << "Randomly generated array with numbers from 0 to 10:" << std::endl;
    for (int i = 0; i < ARRAY_SIZE; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
