// LAB302.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    string studentid;
    string name;
    int score;

    cout << "Enter student ID: ";
    cin >> studentid;

    cout << "Enter Name: ";
    cin >> name;

    cout << "Enter Grade: ";
    cin >> score;

    if (score >= 90) {
        cout << "---- Student Report -----" << endl;
        cout << "Student ID: " << studentid << endl;
        cout << "Name: " << name << endl;
        cout << "Score: " << score << endl;
        cout << "Grade: A" << endl;
        cout << "-------------------------" << endl;
    }
    else if (score >= 80) {
        cout << "---- Student Report -----" << endl;
        cout << "Student ID: " << studentid << endl;
        cout << "Name: " << name << endl;
        cout << "Score: " << score << endl;
        cout << "Grade: B" << endl;
        cout << "-------------------------" << endl;
    }
    else if (score >= 70) {
        cout << "---- Student Report -----" << endl;
        cout << "Student ID: " << studentid << endl;
        cout << "Name: " << name << endl;
        cout << "Score: " << score << endl;
        cout << "Grade: C" << endl;
        cout << "-------------------------" << endl;
    }
    else if (score >= 60) {
        cout << "---- Student Report -----" << endl;
        cout << "Student ID: " << studentid << endl;
        cout << "Name: " << name << endl;
        cout << "Score: " << score << endl;
        cout << "Grade: D" << endl;
        cout << "-------------------------" << endl;
    }
    else {
        cout << "---- Student Report -----" << endl;
        cout << "Student ID: " << studentid << endl;
        cout << "Name: " << name << endl;
        cout << "Score: " << score << endl;
        cout << "Grade: F" << endl;
        cout << "-------------------------" << endl;
    }

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
