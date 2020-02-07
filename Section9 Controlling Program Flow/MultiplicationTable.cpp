// Section 9 Controlling Program Flow
// Nested Loops

#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main(){
    
// 10 * 10 Multiplication Table
    for(int num1{1}; num1 <= 10; ++num1){
       for(int num2{1}; num2 <= 10; ++num2){
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
       }
   }
   
// 
    std::cout << std::endl;
    return 0;
}