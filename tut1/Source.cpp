#include <iostream>
using namespace std;

int main() {

	cout << "Enter a number from 1-20" << endl;
	int number;
	cin >> number;

	if (number < 1 || number > 20){
		cout << "invalid number!";
		system("pause");
		return 0;

	}

	if (number % 15 == 0)
		cout << "fizzbuzzwoof";
     

	else if (number % 5 == 0)
		cout << "buzz";

	else if (number % 3 == 0)
		cout << "fizz";

	else if (number % 3 == 0 && number % 5 == 0)
		cout << "fizzbuzz";
}