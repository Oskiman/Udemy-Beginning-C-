// Section 11 Functions
// Factorial

#include <iostream>

using namespace std;

unsigned long long factorial(unsigned long long n);

int main(){
    
    cout << factorial(3) << endl;   // 6
    cout << factorial(8) << endl;   // 40321
    cout << factorial(12) << endl;  // 479001600
    cout << factorial(20) << endl;  // 2432902008176640000
    
    std::cout << std::endl;
    return 0;
}

unsigned long long factorial(unsigned long long n){
    if(n == 0){
        return 1;
    }
    
    return n * factorial(n - 1);
}