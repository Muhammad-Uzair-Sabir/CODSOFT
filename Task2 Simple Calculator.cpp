#include <iostream>
using namespace std;
int main () {
	
	int num1, num2, Operation;
	int sum, sub, mul, div;
	string option;

	while (1) {
		cout << endl;
		cout << "Do you want to use calculator (y/n): ";
		cin >> option;
		
		if (option == "y") {
		cout << endl;
		cout << "\t\t\t\t\tWelcome to Calculator" << endl << endl << endl;
		
		cout << "Enter first number: ";
		cin >> num1;
		cout << "Enter second number: ";
		cin >> num2;
		cout << endl;
		
		cout << "Select the arithmetic operation to perform" << endl;
		
		cout << "1. Addition(+)" << endl << "2. Subtraction(-)" << endl;
		cout << "3. Multiplication(*)" << endl << "4. Division(/)" << endl;
		cout << endl;
		cin >> Operation;
		cout << endl;
		
		switch (Operation) {
			case 1:
				sum = num1 + num2;
				cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << endl;
				break;
			case 2:
				sub = num1 - num2;
				cout << "The subtraction of " << num1 << " and " << num2 << " is: " << sub << endl;
				break;
			case 3:
				mul = num1 * num2;
				cout << "The multiplication of " << num1 << " and " << num2 << " is: " << mul << endl;
				break;
			case 4:
				div = num1 / num2;
				cout << "The division of " << num1 << " and " << num2 << " is: " << div << endl;
				break;
			default:
                cout << "Invalid operation. Please select a valid operation" << endl;
                break;
		}
		
		}
	else {
		cout << endl;
		cout << "Calculator exited!" << endl;
		break;
	}
	}
}
