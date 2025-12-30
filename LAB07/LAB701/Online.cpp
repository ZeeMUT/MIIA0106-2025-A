// TODO: เปลี่ยนค่า a ผ่าน pointer
#include <iostream>

using namespace std;

int main() {

	int x = 10;
	int* p = &x;
	// แสดงค่า
	cout << "Value of x = " << x << endl;
	cout << "Value of &p = " << *p << endl;

return 0;
}