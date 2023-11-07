#include <iostream>
using namespace std;

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9 / 5) + 32;
}

int main() {
    double celsius;
    cout << "¼·¾¾ ¿Âµµ¸¦ ÀÔ·ÂÇÏ¼¼¿ä: ";
    cin >> celsius;

    double fahrenheit = celsiusToFahrenheit(celsius);
    cout << celsius << " ¼·¾¾´Â " << fahrenheit << " È­¾¾ÀÔ´Ï´Ù." << endl;

    return 0;
}
