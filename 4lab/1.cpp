//код функции IsPower5 и программы для нахождения количества степеней числа 5
#include <iostream>

bool IsPower5(int K) {
    while (K % 5 == 0 && K > 1) {
        K /= 5;
    }
    return K == 1;
}

int main() {
    int count = 0;
    int numbers[10] = {5, 25, 125, 2, 10, 50, 100, 500, 1000, 300};
    for (int i = 0; i < 10; i++) {
        if (IsPower5(numbers[i])) {
            count++;
        }
    }
    std::cout << "Kolvo stepenei chisla 5: " << count << std::endl;
    return 0;
}
