// Section 11 Functions
// Math examples

#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

int main(){
    
    double num{};
    
    cout << "Enter a number (double): ";
    cin >> num;
    
    cout << "The square root of " << num << " is " << sqrt(num) << endl;
    cout << "The cube root of " << num << " is " << cbrt(num) << endl;
    
    cout << "The sine of " << num << " is " << sin(num) << endl;
    cout << "The cosine of " << num << " is " << cos(num) << endl;
    
    cout << "The ceiling of " << num << " is " << ceil(num) << endl;
    cout << "The floor of " << num << " is " << floor(num) << endl;
    cout << "The round of " << num << " is " << round(num) << endl;
    
    double power{};
    cout << "Enter a power to raise " << num << " to: ";
    cin >> power;
    cout << num << " raised to the " << power << " power is: " << pow(num, power) << endl;
    
    
    
    std::cout << std::endl;
    return 0;
}