#include <iostream>
/*Описать функцию Calc(A, B, Op) вещественного типа, выполняющую над
ненулевыми вещественными числами A и B одну из арифметических операций и
возвращающую ее результат. Вид операции определяется целым параметром Op: 1 */
using namespace std;

float Calc(float A, float B, int Op) {
    float result;
    switch (Op) {
        case 1:
            result = A + B;
            break;
        case 2:
            result = A - B;
            break;
        case 3:
            result = A * B;
            break;
        case 4:
            result = A / B;
            break;
        default:
            cout << "Invalid operation" << endl;
            result = 0;
            break;
    }
    return result;
}

int main() {
    float A = 10.5;
    float B = 2.0;
    int Op = 3;

    float result = Calc(A, B, Op);

    cout << "Result: " << result << endl;

    return 0;
}
