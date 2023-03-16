#include <iostream>
//Вычислить сумму нечётных/чётных элементов массива
int main() {
    const int ARRAY_SIZE = 10;
    int array[ARRAY_SIZE] = {6, 1, 8, 2, 9, 3, 7, 4, 5, 2};
    int sum_even = 0, sum_odd = 0;

    // Вычисление сумм четных и нечетных элементов массива
    for (int i = 0; i < ARRAY_SIZE; i++) {
        if (array[i] % 2 == 0) {
            sum_even += array[i];
        }
        else {
            sum_odd += array[i];
        }
    }

    // Вывод результатов на экран
    std::cout << "Sum of even elements: " << sum_even << std::endl;
    std::cout << "Sum of odd elements: " << sum_odd << std::endl;

    return 0;
}
