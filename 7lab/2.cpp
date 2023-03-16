#include <iostream>

using namespace std;

// структура для комплексных чисел
struct Complex {
    double real; // вещественная часть
    double imag; // мнимая часть
};

// функция для умножения комплексных чисел
Complex multiply(Complex num1, Complex num2) {
    Complex result;
    result.real = num1.real * num2.real - num1.imag * num2.imag;
    result.imag = num1.real * num2.imag + num1.imag * num2.real;
    return result;
}

int main() {
    // объявление и инициализация двух комплексных чисел
    Complex num1, num2;
    cout << "Enter the first complex number: ";
    cin >> num1.real >> num1.imag;
    cout << "Enter the second complex number: ";
    cin >> num2.real >> num2.imag;

    // умножение двух комплексных чисел
    Complex result = multiply(num1, num2);

    // вывод результата
    cout << "Result: " << result.real << " + " << result.imag << "i" << endl;

    return 0;
}
