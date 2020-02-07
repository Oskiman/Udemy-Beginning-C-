// Section 11 Functions
// Fibonacci

#include <iostream>

using namespace std;        // Reverting to this for brevity's sake

unsigned long long fibonacci(unsigned long long n);

int main(){
    
    cout << fibonacci(5) << endl;   // 5
    cout << fibonacci(30) << endl;  // 832040
    cout << fibonacci(40) << endl;;  // 102334155
    
    std::cout << std::endl;
    return 0;
}

unsigned long long fibonacci(unsigned long long n){
    if(n <= 1){
        return n;
    }
    
    return fibonacci(n - 1) + fibonacci(n - 2);
}