#include <iostream>
using namespace std;

double kilometersToMiles(double kilometers) {
    return kilometers * 0.621371;
}

double kilometersToFeet(double kilometers) {
    return kilometers * 3280.84;
}

double kilometersToYards(double kilometers) {
    return kilometers * 1093.61;
}

int main() {
    double kilometers;
    cout << "킬로미터(KM)를 입력하세요: ";
    cin >> kilometers;

    double miles = kilometersToMiles(kilometers);
    double feet = kilometersToFeet(kilometers);
    double yards = kilometersToYards(kilometers);

    cout << kilometers << " 킬로미터는\n" << miles << " 마일, " << feet << " 피트, " << yards << " 야드입니다." << endl;

    return 0;
}
