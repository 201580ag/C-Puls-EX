#include <iostream>
#include <string>

int main() {
    std::string username, password;

    using namespace std;  // std ���ӽ����̽��� ���

    cout << "���̵� �Է��ϼ���: ";
    cin >> username;

    cout << "��й�ȣ�� �Է��ϼ���: ";
    cin >> password;

    if (username == "admin" && password == "1234") {
        cout << username << " ȯ���մϴ�!" << endl;
    }
    else {
        cout << "�ùٸ� ���̵�� ��й�ȣ�� �Է��ϼ���." << endl;
    }

    return 0;
}
