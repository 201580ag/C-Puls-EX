#include <iostream>

int main() {
    double num1, num2;

    using namespace std;

    cout << "ù ��° ���ڸ� �Է��ϼ���: ";
    cin >> num1;

    cout << "�� ��° ���ڸ� �Է��ϼ���: ";
    cin >> num2;

    double sum = num1 + num2;
    double difference = num1 - num2;
    double product = num1 * num2;

    cout << "�� ���� ���� " << sum << " �Դϴ�." << endl;
    cout << "�� ���� ���� " << difference << " �Դϴ�." << endl;
    cout << "�� ���� ���� " << product << " �Դϴ�." << endl;

    if (num2 != 0) {
        double division = num1 / num2;
        cout << "�� ���� �������� " << division << " �Դϴ�." << endl;
    }
    else {
        cout << "�� ��° ���ڰ� 0�̹Ƿ� �������� �Ұ����մϴ�." << endl;
    }

    return 0;
}
