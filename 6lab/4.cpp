#include <iostream>
//Увеличить все отрицательные элементы на 5, а положительные уменьшить на 1
int main() {
    const int ARRAY_SIZE = 10;
    int array[ARRAY_SIZE] = {-2, 7, -4, 1, 5, -6, 0, 3, -8, 2};

    // Проход по всем элементам массива
    for (int i = 0; i < ARRAY_SIZE; i++) {
        if (array[i] < 0) {
            // Если элемент отрицательный, увеличиваем его на 5
            array[i] += 5;
        } else {
            // Если элемент положительный или равен 0, уменьшаем его на 1
            array[i] -= 1;
        }
    }

    // Вывод измененного массива на экран
    for (int i = 0; i < ARRAY_SIZE; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
