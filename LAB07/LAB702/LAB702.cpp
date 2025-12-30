// TODO: ?????????? a ???? pointer
#include <iostream>

using namespace std;

int main() {

	int score = 50;
	int* ptr = &score;
	// ???????
	cout << "score = " << score << endl;
	cout << "ptr = " << *ptr << endl;

	// ???? adress
	cout << "adress of score : \t" << &score << endl;
	cout << "value of ptr : \t\t" << ptr << endl;
	cout << "adress of pointer : \t" << &ptr << endl;


	return 0;
}