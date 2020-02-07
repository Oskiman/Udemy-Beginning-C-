// Section 8 Statements & Operators
// Mixed Expressions

/* Ask user to input 3 integers
 * calculate sum of integers
 * calculate mean of integers
 * display 3 integers, sum & mean*/
 
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
    
    int total{};
    int num1{}, num2{}, num3{};
    const int count{3};
    
    cout << "Enter 3 integers separated by spaces: ";
    cin >> num1 >> num2 >> num3;
    
    total = num1 + num2 + num3;
    double average{0.0};
    average = static_cast<double> (total) / count;
    
    cout << "The 3 numbers entered were: " << num1 << " , " << num2 << " , " << num3 << endl;
    cout << "The sum of the 3 numbers is: " << total << endl;
    cout << "The average of the 3 numbers is: " << average << endl;
    
    std::cout << std::endl;
    return 0;
}