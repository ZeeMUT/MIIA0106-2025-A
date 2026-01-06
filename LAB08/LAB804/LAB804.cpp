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

// TODO: swap เขียนเอง
void swapStudent(string& a, string& b) {
    // TODO
    string temp = a;
    a = b;
    b = temp;
}

// TODO: sort เขียนเอง (Bubble sort)
void sortByID(Student students[], int size) {
    // TODO
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (students[j].id > students[j + 1].id) {
                swapStudent(students[j].id, students[j + 1].id);
                swapStudent(students[j].nickname, students[j + 1].nickname);
                swapStudent(students[j].lineid, students[j + 1].lineid);
                swapStudent(students[j].phone, students[j + 1].phone);
            }

        }
    }
}

void printStudents(Student students[], int size) {
    for (int i = 0; i < size; i++) {
        // TODO: cout << students[i]...
        cout << "id : " << students[i].id << "\n";
        cout << "nickname : " << students[i].nickname << "\n";
        cout << "lineid : " << students[i].lineid << "\n";
        cout << "phone : " << students[i].phone << "\n";
        cout << "----------------------\n";
    }
}
int main() {
    const int SIZE = 5;
    Student students[SIZE];

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
    sortByID(students, SIZE);
    cout << "\n===== Student List (Sorted by ID) =====\n";
    printStudents(students, SIZE);

    return 0;
}
