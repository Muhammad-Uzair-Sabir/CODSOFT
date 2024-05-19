#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main () {
	
	srand(time(NULL));
	
	int RandomNumber = rand () % 1000 + 1;
	int num;
	
	while (1) {
		cout << endl;
		cout << "Enter the number to guess between 1 and 1000: ";
		cin >> num;
		
		if (num == RandomNumber) {
			cout << endl;
			cout << "The guessed number is right, Congratulations!" << endl;
			break;
		}
		
		else if (num > RandomNumber) {
			cout << endl;
			cout << "The guessed number is too high!" << endl;
		}
		
		else if (num < RandomNumber) {
			cout << endl;
			cout << "The guessed number is too low!" << endl;
		}
	}
}
