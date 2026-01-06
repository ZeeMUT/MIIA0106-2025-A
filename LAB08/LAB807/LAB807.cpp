#include <iostream>
#include <string>
using namespace std;

struct Phone {
    string mobile;
    string home;
};

struct Parent {
    string name;
    string relationship;
    Phone contact;
};

struct Student {
    string id;
    string nickname;
    string lineid;
    string phone;
    Phone Mycontact;
    Parent myParent;
};

void inputData(Student& s1) {
    cout << "=== Input Data ===\n";
    cout << "Enter your id :" << endl;
    cin >> s1.id;
    cout << "Enter your nickname :" << endl;
    cin >> s1.nickname;
    cout << "Enter your lineid :" << endl;
    cin >> s1.lineid;
    cout << "Enter your phone :" << endl;
    cin >> s1.Mycontact.mobile;
    cout << "Enter your home phone :" << endl;
    cin >> s1.Mycontact.home;
    cout << "Enter parent's name :" << endl;
    cin >> s1.myParent.name;
    cout << "Enter relationship :" << endl;
    cin >> s1.myParent.relationship;
    cout << "Enter parent's mobile number :" << endl;
    cin >> s1.myParent.contact.mobile;
    cout << "Enter parent's home number :" << endl;
    cin >> s1.myParent.contact.home;
}

void outputData(const Student s1) {
    cout << "\n=== Output Data ===\n";
    cout << "ID : " << s1.id << "\n";
    cout << "Nickname : " << s1.nickname << "\n";
    cout << "Lineid : " << s1.lineid << "\n";
    cout << "---- My Contact ----" << "\n";
    cout << "Mobile number : " << s1.Mycontact.mobile << "\n";
    cout << "Home number : " << s1.Mycontact.home << "\n";
    cout << "---------------------" << "\n";
    cout << "Parent's name : " << s1.myParent.name << "\n";
    cout << "Relationship : " << s1.myParent.relationship << "\n";
    cout << "Parent's mobile number : " << s1.myParent.contact.mobile << "\n";
    cout << "Parent's home number : " << s1.myParent.contact.home << "\n";
}

int main() {
    Student s1;
    inputData(s1);
    outputData(s1);
    return 0;
}