#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	const int Options = 4; 
	

	const char* drink[Options] = {"Coffee", "Tea", "Coke", "Orange Juice"};
	unsigned short int tally[Options] = {0,0,0,0};
	
	
	unsigned short int person = 1;
	
	
	cout << "\n  1. Coffee  2. Tea  3. Coke  4. Orange Juice\n\n";
	
	
	for ( int input = 1 ; input != -1 ; person++ ) {
		cout << "Please input the favorite beverage of person #" << person 
		     << ":\nChoose 1, 2, 3, or 4 from the above menu"
		        " or -1 to exit the program\n";
		cin >> input;
		if ( input >= 1 and input <= Options) {
			tally[input-1]++; 
		} else {
			if ( input != -1 )
				cout << "* Invalid choice. Try again. *\n";
			person--;          
		}
	}
	
	cout << "\nBeverage         Number of Votes"
	        "\n************\n";
	     
	for ( int line = 0 ; line <Options ; line++ ) {
		cout << setw(17) << left << drink[line]
		     << setw(17) << left << tally[line] << endl;
	}
	cout << endl;
	return 0;
}
