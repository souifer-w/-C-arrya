#include<iostream>

using namespace std;

int main() {

	double Gender[3];

	cout << "please enter the x 1\n";
	cin >> Gender[0];

	cout << "please enter the x 2\n";
	cin >> Gender[1];

	cout << "please enter the x3\n";
	cin >> Gender[2];




	double Avg = (Gender[0] + Gender[1] + Gender[2]) / 3;

	cout << "the averge of grandes is " << Avg << endl;
	return 0;
}