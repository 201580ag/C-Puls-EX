#include <iostream>
#include <cmath>

int main() {
    double number;

    using namespace std;

    cout << "숫자를 입력하세요: ";
    cin >> number;

    if (number == static_cast<int>(number)) {
        if (static_cast<int>(number) % 2 == 0) {
            cout << number << "는 짝수입니다." << endl;
        }
        else {
            cout << number << "는 홀수입니다." << endl;
        }
    }
    else {
        cout << number << "는 소수입니다." << endl;
    }

    return 0;
}
