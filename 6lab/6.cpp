#include <iostream>
//Создать новый массив из двух других массивов путём операций над элементами массивов: перемножения
int main() {
    const int ARRAY_SIZE = 5;
    int array1[ARRAY_SIZE] = {1, 2, 3, 4, 5};
    int array2[ARRAY_SIZE] = {10, 9, 8, 7, 6};
    int result[ARRAY_SIZE];

    // Проход по всем элементам массивов
    for (int i = 0; i < ARRAY_SIZE; i++) {
        result[i] = array1[i] * array2[i]; // Перемножение элементов
    }

    // Вывод результата на экран
    std::cout << "Result array: ";
    for (int i = 0; i < ARRAY_SIZE; i++) {
        std::cout << result[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
