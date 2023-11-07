#include <iostream>
#include <string>

int main() {
    std::string username, password;

    using namespace std;  // std 네임스페이스를 사용

    cout << "아이디를 입력하세요: ";
    cin >> username;

    cout << "비밀번호를 입력하세요: ";
    cin >> password;

    if (username == "admin" && password == "1234") {
        cout << username << " 환영합니다!" << endl;
    }
    else {
        cout << "올바른 아이디와 비밀번호를 입력하세요." << endl;
    }

    return 0;
}
