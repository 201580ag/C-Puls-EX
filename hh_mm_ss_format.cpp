#include <iostream>
using namespace std;

int main() {
    int hours, minutes, seconds;

    cout << "시간을 입력하세요: ";
    cin >> hours;

    cout << "분을 입력하세요: ";
    cin >> minutes;

    cout << "초를 입력하세요: ";
    cin >> seconds;

    cout << "입력한 시간은 " << hours << ":" << minutes << ":" << seconds << " 입니다." << endl;

    return 0;
}
