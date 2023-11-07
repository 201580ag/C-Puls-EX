#include <iostream>

int main() {
    double num1, num2;

    using namespace std;

    cout << "첫 번째 숫자를 입력하세요: ";
    cin >> num1;

    cout << "두 번째 숫자를 입력하세요: ";
    cin >> num2;

    double sum = num1 + num2;
    double difference = num1 - num2;
    double product = num1 * num2;

    cout << "두 수의 합은 " << sum << " 입니다." << endl;
    cout << "두 수의 차는 " << difference << " 입니다." << endl;
    cout << "두 수의 곱은 " << product << " 입니다." << endl;

    if (num2 != 0) {
        double division = num1 / num2;
        cout << "두 수의 나눗셈은 " << division << " 입니다." << endl;
    }
    else {
        cout << "두 번째 숫자가 0이므로 나눗셈은 불가능합니다." << endl;
    }

    return 0;
}
