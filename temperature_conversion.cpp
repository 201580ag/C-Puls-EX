#include <iostream>
using namespace std;

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}

int main() {
    double celsius;
    cout << "���� �µ��� �Է��ϼ���: ";
    cin >> celsius;

    double fahrenheit = celsiusToFahrenheit(celsius);
    cout << celsius << " ������ " << fahrenheit << " ȭ���Դϴ�." << endl;

    return 0;
}
