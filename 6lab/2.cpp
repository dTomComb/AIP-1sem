#include <iostream>
//Вычислить сумму элементов массива: больших 5, меньших 7, больших 3
int main() {
    const int ARRAY_SIZE = 10;
    int array[ARRAY_SIZE] = {6, 1, 8, 2, 9, 3, 7, 4, 5, 2};
    int sum_greater_than_5 = 0, sum_less_than_7 = 0, sum_greater_than_3 = 0;

    // Вычисление сумм элементов массива, удовлетворяющих условиям
    for (int i = 0; i < ARRAY_SIZE; i++) {
        if (array[i] > 5) {
            sum_greater_than_5 += array[i];
        }
        if (array[i] < 7) {
            sum_less_than_7 += array[i];
        }
        if (array[i] > 3) {
            sum_greater_than_3 += array[i];
        }
    }

    // Вывод результатов на экран
    std::cout << "Sum of elements greater than 5: " << sum_greater_than_5 << std::endl;
    std::cout << "Sum of elements less than 7: " << sum_less_than_7 << std::endl;
    std::cout << "Sum of elements greater than 3: " << sum_greater_than_3 << std::endl;

    return 0;
}
