// TODO: Bubble Sort แบบมากไปน้อย ด้วย pointer
#include <iostream>
using namespace std;
void printArray(int* p, int size) {
	// TODO
	for (int i = 0; i < size; i++) {
		//array
		cout << *(p + i) << "\t";
	}
	cout << "\n";
}
void swapValue(int* a, int* b) {
	// TODO
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
void sortDescending(int* p, int size) {
	//for รอบ
		for(int i =0; i< size -1;i++)
		{
			//for เปรียบเทียบค่า
			for (int j = 0; j < size - 1; j++) 
			{
				if (*(p + j) < *(p + j + 1))
				{
					swapValue((p + j), (p + j + 1));
				}

			}
		}
}

int main() {
	int arr[] = { 6, 8, 1, 1, 3, 0, 0, 2, 4};
	int size = 9;

	printArray(arr, size);
	sortDescending(arr, size);
	printArray(arr, size);
	return 0;
}

//6, 8, 1, 1, 3, 0, 0, 2, 4
//ถ้าน้อยกว่าสลับตำแหน่งกัน
//ตำแหน่งที่ 1
// 6 < 8 T สลับ
// 8 < 1 F ไม่สลับ
// 1 < 1 F ไม่สลับ
// 1 < 3 T สลับ
// 3 < 0 F ไม่สลับ
// 0 < 2 T สลับ
// 2 < 4 T สลับ