// Section 9 Controlling Program Flow
// Conditional Operator

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
    
//    int num{};
//    
//    cout << "Enter an integer: ";
//    cin >> num;
////    
//    if(num % 2 == 0){
//        cout << num << " is even" << endl;
//    }
//    else{
//        cout << num << " is odd" << endl;
//    }
    
    // Above code refactored using the conditional operator
    
   // cout << num << ((num % 2 == 0) ? " is even" : " is odd");
    
    // Checking 2 integers for high & low
    int num1{}, num2{};
    
    cout << "Enter 2 integers separated by a space: ";
    cin >> num1 >> num2;
    
    // Check for equality first
    if(num1 != num2){
        cout << "Largest " << ((num1 > num2) ? num1 : num2) << endl;
        cout << "Smallest " << ((num1 < num2) ? num1 : num2) << endl;
    }
    else{
        cout << num1 << " and " << num2 << " are the same" << endl;
    }
    std::cout << std::endl;
    return 0;
}