// LAB501.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#define math_pi 3.14159


using namespace std;

double calculateCircleArea(double x)
{
    double area = math_pi * x * x;
    return area;
}

double rectangleArea(double length, double width)
{
	double area = length * width;
	return area;
}

int main()
{

    //หาพื้นที่วงกลม
    const double PI = 3.14159;
    double radius;
    cout << "Enter the radius of the circle : ";
    cin >> radius;

    double area = calculateCircleArea(radius);
    cout << "The area of the circle with radius : " << radius << "\n Circle Area : " << area << endl;

    // ฟังชันหาพื้นที่สี่่เหลียม    

    double length, width;
    cout << "Enter the length of the rectangle : ";
    cin >> length;
    cout << "Enter the width of the rectangle : ";
    cin >> width;

    double rectArea = rectangleArea(length, width);
    cout << "The area of the rectangle with length : " << length << " and width : " << width << "\n Rectangle Area : " << rectArea << endl;

    return 1;
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
