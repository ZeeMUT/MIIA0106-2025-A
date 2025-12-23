
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void displayStudentInfo(string name, string id, double total, char grade)
{
	cout << "Student Name: " << name << "\n";
	cout << "Student ID : " << id << "\n";
	cout << "total Score : " << fixed << setprecision(2) << total << "\n";
	cout << "Grade : " << grade << "\n";
}

void calculateGrade(double score, char& grade)
{
	if (score >= 90) grade = 'A';
	else if (score >= 80) grade = 'B';
	else if (score >= 70) grade = 'C';
	else if (score >= 60) grade = 'D';
	else grade = 'F';
}

int main()
{
	const int N = 3; // students
	const int M = 4; // subjects

	string name[N], id[N];
	double score[N][M];
	double total[N] = { 0 };
	char grade[N];

	for (int i = 0; i < N; i++) {
		cout << "Enter student name " << (i + 1) << " : ";
		getline(cin >> ws, name[i]);
		cout << "Enter student ID " << (i + 1) << " : ";
		cin >> id[i];
		total[i] = 0;
		cout << "Enter score student " << (i + 1) << " :\n";
		for (int j = 0; j < M; j++) {
			cout << "  Subject " << (j + 1) << ": ";
			cin >> score[i][j];
			total[i] += score[i][j];
		}
		calculateGrade(total[i], grade[i]);
		displayStudentInfo(name[i], id[i], total[i], grade[i]);
	}
	return 0;
}

	// TODO: วนรับ name/id
	// TODO: nested loop รับคะแนน M วิชา + รวม total[i]
	// TODO: calculateGrade(total[i], grade[i]);

	// TODO: แสดงผลโดยใช้ displayStudentInfo(name[i], id[i], total[i], grade[i]);