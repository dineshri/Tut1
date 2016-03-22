#include <iostream>
using namespace std;

int main() {

	cout << "Enter a number from 1-50" << endl;
	int number;
	cin >> number;

	if (number < 1 || number > 50){
		cout << "invalid number!";
		system("pause");
		return 0;

	}

	if (number % 3 == 0 && number % 5 == 0 && number % 7 == 0)
		cout << "fizzbuzzwoof" << endl;

	else if (number % 5 == 0 && number % 7 == 0)
		cout << "buzzwoof" << endl;

	else if (number % 3 == 0 && number % 7 == 0)
		cout << "fizzwoof" << endl;

	else if (number % 3 == 0 && number % 5 == 0)
		cout << "fizzbuzz" << endl;

	else if (number % 7 == 0)
		cout << "woof" << endl;


	else if (number % 5 == 0)
		cout << "buzz";

	else if (number % 3 == 0)
		cout << "fizz" << endl;

	system("pause");
}