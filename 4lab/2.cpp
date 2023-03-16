#include <iostream>
/*Описать процедуру DigitCountSum(K, C, S), находящую количество C цифр целого
положительного числа K, а также их сумму S (K — входной, C и S — выходные
параметры целого типа). С помощью этой процедуры найти количество и сумму
цифр для каждого из пяти данных целых чисел*/
using namespace std;

void DigitCountSum(int K, int& C, int& S) {
    C = 0;
    S = 0;
    while (K > 0) {
        C++;
        S += K % 10;
        K /= 10;
    }
}

int main() {
    int nums[] = {12345, 67890, 13579, 24680, 987654321};
    int num_count = sizeof(nums)/sizeof(int);

    for (int i = 0; i < num_count; i++) {
        int C, S;
        DigitCountSum(nums[i], C, S);
        cout << "Number: " << nums[i] << endl;
        cout << "Digit Count: " << C << endl;
        cout << "Digit Sum: " << S << endl;
    }

    return 0;
}
