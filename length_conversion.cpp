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
    cout << "ų�ι���(KM)�� �Է��ϼ���: ";
    cin >> kilometers;

    double miles = kilometersToMiles(kilometers);
    double feet = kilometersToFeet(kilometers);
    double yards = kilometersToYards(kilometers);

    cout << kilometers << " ų�ι��ʹ�\n" << miles << " ����, " << feet << " ��Ʈ, " << yards << " �ߵ��Դϴ�." << endl;

    return 0;
}
