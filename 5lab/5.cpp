#include <iostream>
/*Составить алгоритм, определяющий количество трёхзначных натуральных чисел,
сумма цифр которого равна А.*/
int main() {
    int A, count = 0;

    std::cout << "Enter the number A: ";
    std::cin >> A;

    for (int i = 100; i < 1000; i++) {
        int sum = 0;
        int n = i;

        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }

        if (sum == A) {
            count++;
        }
    }

    std::cout << "The number of three-digit natural numbers whose digits sum up to " << A << " is: " << count << std::endl;

    return 0;
}
