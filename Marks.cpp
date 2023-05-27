#include <iostream>
using namespace std;

int main() {
    double marks;

    cout << "Enter the student marks: ";
    cin >> marks;

    if (marks >= 70 && marks<= 100) {
        cout << "A";
    }
    else if (marks >= 60 && marks <= 69) {
        cout << "B";
    }
    else if (marks >= 50 && marks <= 59) {
        cout << "C";
    }
    else if (marks >= 40 && marks <=49) {
        cout << "D";
    }
    else if (marks >0 && marks <=39)
	 {
        	cout<<"E";
    }
else 
{
cout << "invalid marks";
}
    return 0;
}
