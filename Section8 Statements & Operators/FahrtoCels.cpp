// Section 8 Statements & Operators
// Convert fahrenheit to celsius

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
    
    cout << "Please enter a temperature in fahrenheit: ";
    double fahrenheit{0.0};
    double celsius{0.0};
    cin >> fahrenheit;
    
    celsius = (fahrenheit - 32) * 5 / 9;
    
    cout << fahrenheit << " fahrenheit is equivalent to " << celsius << " celsius" << endl;
    std::cout << std::endl;
    return 0;
}