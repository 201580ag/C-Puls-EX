#include <iostream>
#include <cmath>

int main() {
    double number;

    using namespace std;

    cout << "���ڸ� �Է��ϼ���: ";
    cin >> number;

    if (number == static_cast<int>(number)) {
        if (static_cast<int>(number) % 2 == 0) {
            cout << number << "�� ¦���Դϴ�." << endl;
        }
        else {
            cout << number << "�� Ȧ���Դϴ�." << endl;
        }
    }
    else {
        cout << number << "�� �Ҽ��Դϴ�." << endl;
    }

    return 0;
}
