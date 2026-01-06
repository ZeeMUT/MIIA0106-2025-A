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

// TODO: เขียนฟังก์ชันนี้
void printStudent(Student s1) {
    cout << "ID : " << s1.id << endl;
    cout << "Nickname : " << s1.nickname << endl;
    cout << "Lineid : " << s1.lineid << endl;
    cout << "Phone : " << s1.phone << endl;
}

int main() {
    Student s1;

    cout << "=== Input Student 1 ===\n";
    // TODO: cin >> ...
        // TODO: cin >> ...
    cout << "Enter your id :" << endl;
    cin >> s1.id;
    cout << "Enter your nickname :" << endl;
    cin >> s1.nickname;
    cout << "Enter your lineid :" << endl;
    cin >> s1.lineid;
    cout << "Enter your phone :" << endl;
    cin >> s1.phone;

    cout << "\n=== Output (from function) ===\n";
    // TODO: เรียก printStudent
    printStudent(s1);

    return 0;
}

