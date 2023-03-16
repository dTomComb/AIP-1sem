#include <iostream>
//Увеличить все нечётные элементы массива на 3, а чётные в 2 раза
int main() {
    const int ARRAY_SIZE = 10;
    int array[ARRAY_SIZE] = {1, 5, 2, 7, 4, 8, 3, 9, 6, 10};

    // Проход по всем элементам массива
    for (int i = 0; i < ARRAY_SIZE; i++) {
        if (array[i] % 2 != 0) {
            // Если элемент нечетный, увеличиваем его на 3
            array[i] += 3;
        } else {
            // Если элемент четный, умножаем его на 2
            array[i] *= 2;
        }
    }

    // Вывод измененного массива на экран
    for (int i = 0; i < ARRAY_SIZE; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
