#include <iostream>
#include <string>
using namespace std;

class StudentMS {
public:
	string Sname;
	int Sage;
	int Smark_math;
	float Smark_bio;
	float Smark_eng;
	float Smark_sport;
	float Smark_history;


};

int main () {
 	string username;
	string sname;
	string yn;
	int sage;
	int sgrade;
	StudentMS root;
	cout << "\t\t\t  Welcome to Student's Management System\n";
	cout << "\nEnter username: "; cin >> username;
	cout << "\nHi, " << username << endl;
	cout << "Enter student's name: "; cin >> sname;
	cout << "Enter student's age: "; cin >> sage;
	cout << "Enter studen's grade: "; cin >> sgrade;
	
	cout << "Enter student's mark for math: ";
 	cin >> root.Smark_math;

 	cout << "Enter student's mark for history: ";
 	cin >> root.Smark_history;

 	cout << "Enter student's mark for sport: ";
 	cin >> root.Smark_sport;

 	cout << "Enter student's mark for english: ";
 	cin >> root.Smark_eng;

 	cout << "Enter student's mark for bio: ";
 	cin >> root.Smark_bio;
 	cout << "Save Studen's card? Y/n :"; cin >> yn;
 	if (yn == "y") {
 		cout << "Successfully Saved. Copy.";
 	}else {
 		system("g++ extern.cc");
 		system("./a.out");
 	}
 	



	return 0;
}
