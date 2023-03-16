#include <iostream>
using namespace std;

struct Time {
    int hours;
    int minutes;
    int seconds;
};

// Функция сложения двух времен
Time addTime(Time t1, Time t2) {
    Time sum;
    sum.seconds = t1.seconds + t2.seconds;
    sum.minutes = t1.minutes + t2.minutes;
    sum.hours = t1.hours + t2.hours;
    
    if (sum.seconds >= 60) {
        sum.seconds -= 60;
        sum.minutes++;
    }
    
    if (sum.minutes >= 60) {
        sum.minutes -= 60;
        sum.hours++;
    }
    
    return sum;
}

int main() {
    Time time1, time2, sum;
    
    cout << "Enter the first time (hh:mm:ss): ";
    cin >> time1.hours >> time1.minutes >> time1.seconds;
    
    cout << "Enter the second time (hh:mm:ss): ";
    cin >> time2.hours >> time2.minutes >> time2.seconds;
    
    sum = addTime(time1, time2);
    
    cout << "The sum is: " << sum.hours << ":" << sum.minutes << ":" << sum.seconds << endl;
    
    return 0;
}
