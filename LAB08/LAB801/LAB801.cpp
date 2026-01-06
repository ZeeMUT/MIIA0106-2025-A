// Lec101.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

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
	Student s1; // ตัวแปรเดี่ยวของ struct
	cout << "=== Input Student 1 ===\n";
	// TODO: cin >> ...
	cout << "Enter your id :" << endl;
	cin >> s1.id;
	cout << "Enter your nickname :" << endl;
	cin >> s1.nickname;
	cout << "Enter your lineid :" << endl;
	cin >> s1.lineid;
	cout << "Enter your phone :" << endl;
	cin >> s1.phone;
	cout << "\n=== Output Student 1 ===\n";
	// TODO: cout << ...
	cout << "Your id : " << s1.id << "\n";
	cout << "Your nickname : " << s1.nickname << "\n";
	cout << "Your lineid : " << s1.lineid << "\n";
	cout << "Your phone : " << s1.phone << "\n";
	return 0;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
