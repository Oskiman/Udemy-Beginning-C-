// Section 8 Statements & Operators
// Assignment Statement

#include <iostream>

using std::cout;
using std::endl;

int main(){
    
    int num1{10};
    int num2{20};
    
    cout << num1 << endl;
    cout << num2 << endl;
    
    num1 = num2;
    
    cout << num1 << endl;
    cout << num2 << endl;
    
    num1 = num2 = 1000;
    
    cout << num1 << endl;
    cout << num2 << endl;
    
    std::cout << std::endl;
    return 0;
}