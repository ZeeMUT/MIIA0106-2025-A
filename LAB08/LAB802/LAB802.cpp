#include <iostream>
#include <string>
using namespace std;

struct Student {
    // TODO
    string id;
    string nickname;
    string lineid;
    string phone;
};

int main() {
    const int SIZE = 5;
    Student students[SIZE]; // Array ของ struct

    // INPUT
    for (int i = 0; i < SIZE; i++) {
        cout << "=== Input Student " << (i + 1) << " ===\n";
        // TODO: cin >> students[i]...
        cout << "Enter your id :" << endl;
        cin >> students[i].id;
        cout << "Enter your nickname :" << endl;
        cin >> students[i].nickname;
        cout << "Enter your lineid :" << endl;
        cin >> students[i].lineid;
        cout << "Enter your phone :" << endl;
        cin >> students[i].phone;
        cout << endl;
    }

    // OUTPUT
    cout << "\n===== Student List =====\n";
    for (int i = 0; i < SIZE; i++) {
        // TODO: cout << students[i]...

        cout << "id : " << students[i].id << "\n";
        cout << "nickname : " << students[i].nickname << "\n";
        cout << "lineid : " << students[i].lineid << "\n";
        cout << "phone : " << students[i].phone << "\n";
        cout << "----------------------\n";
    }

    return 0;
}
