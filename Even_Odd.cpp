#include <iostream>
using namespace std;
	// Main function
int main() {
	// Declare variable
    int number;
	// Prompt the user to enter a value
 	 cout << "Enter a number: ";
	 cin >> number;
	// Test modulus condition using comparison/relational operator
    if (number % 2 == 0) {
    	//Display this if condition is met
  	  cout << number << " is even." << endl;

    } else {
    	//Display this if condition is not met
 	  cout << number << " is odd." << endl;
    }

    return 0;
}