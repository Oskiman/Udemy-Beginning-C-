// Section 8 Statements & Operators
// Relational Operators

#include <iostream>

using std::boolalpha;
using std::cin;
using std::cout;
using std::endl;
using std::noboolalpha;

int main(){
    
    cout << boolalpha;
    
    int num1{0}, num2{0};
    //cout << "Enter 2 integers separated by a space: ";
    //cin >> num1 >> num2;
    
//    cout << num1 << " > " << num2 << ": " << (num1 > num2) << endl;
//    cout << num1 << " >= " << num2 << ": " << (num1 >= num2) << endl;
//    cout << num1 << " < " << num2 << ": " << (num1 < num2) << endl;
//    cout << num1 << " <= " << num2 << ": " << (num1 <= num2) << endl;
    
    const int lower{10};
    const int upper{20};
    
    cout << "Enter an integer that is greater than " << lower << ": ";
    cin >> num1;
    cout << num1 << " > " << lower << " is " << (num1 > lower) << endl;
    
    cout << "Enter an integer that is less than or equal to " << upper << ": ";
    cin >> num1;
    cout << num1 << " <= " << upper << " is " << (num1 <= upper) << endl;
    
    std::cout << std::endl;
    return 0;
}