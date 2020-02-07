// Section 8 Statements & Operators
// Equality Operatora

#include <iostream>

using std::boolalpha;
using std::cin;
using std::cout;
using std::endl;
using std::noboolalpha;

int main(){
    
    bool equal_result{false};
    bool not_equal_result{false};
    
    
    
    cout << boolalpha;
    
//    int num1{0}, num2{0};
//    cout << "Enter 2 integers separated by a space: ";
//    cin >> num1 >> num2;
//    equal_result = (num1 == num2);
//    not_equal_result = (num1 != num2);
//    cout << "Comparison result(equals): " << equal_result << endl;
//    cout << "Comparison result(not equals): " << not_equal_result << endl;
    
//    char char1{}, char2{};
//    cout << "Enter 2 characters separated by a space: ";
//    cin >> char1 >> char2;
//    equal_result = (char1 == char2);
//    not_equal_result = (char1 != char2);
//    cout << "Comparison result(equals): " << equal_result << endl;
//    cout << "Comparison result(not equals): " << not_equal_result << endl;
    
//    double double1{0.0}, double2{0.0};
//    cout << "Enter 2 doubles separated by a space: ";
//    cin >> double1 >> double2;
//    equal_result = (double1 == double2);
//    not_equal_result = (double1 != double2);
//    cout << "Comparison result(equals): " << equal_result << endl;
//    cout << "Comparison result(not equals): " << not_equal_result << endl;
    
    double double1{0.0};
    int num1{0};
    cout << "Enter an int & a double separated by a space: ";
    cin >> num1 >> double1;
    equal_result = (num1 == double1);
    not_equal_result = (num1 != double1);
    cout << "Comparison result(equals): " << equal_result << endl;
    cout << "Comparison result(not equals): " << not_equal_result << endl;
    
    
    std::cout << std::endl;
    return 0;
}