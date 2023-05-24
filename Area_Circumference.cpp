#include <iostream>
#include <cmath>

using namespace std;
// Declaring a constant
const double PI = 3.14159;
// Main function
int main() {
    double radius, area, circumference;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    // Calculate the area and perimeter
    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    // Display the results
    cout << "Area of the circle: " << area << endl;
    cout << "Circumference of the circle: " << circumference << endl;

    return 0;
}