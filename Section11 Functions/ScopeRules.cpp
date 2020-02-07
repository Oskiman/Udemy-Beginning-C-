// Section 11 Functions
// Scope rules

#include <iostream>

// Function prototypes
void local_example(int x);
void global_example();
void static_local_example();

using std::cin;
using std::cout;
using std::endl;

int num{300};   // Global, declared outside any class or function

int main(){
    
    int num{100};
    int num1{500};
    
    cout << "Local num is: " << num << " in main" << endl;
    
    {
        // creates a new level of scope
        int num{200};   // local to this block
        cout << "Local num is: " << num << " in this block" << endl;
        cout << "Inner block can 'see out' to main, num1 is: " << num1 << endl;
    }
    
    cout << "Local num is: " << num << " in main" << endl;
    
    local_example(10);
    local_example(20);
    
    global_example();
    global_example();
    
    static_local_example();
    static_local_example();
    static_local_example();
    
    std::cout << std::endl;
    return 0;
}

// Function definitions
void local_example(int x){
    int num{1000};  // local to local example
    cout << "\nLocal num is: " << num << " in local example - start" << endl;
    num = x;
    cout << "Local num is: " << num << " in local example - end" << endl;
}

void global_example(){
    cout << "\nGlobal num is: " << num << " in global example - start" << endl;
    num *= 2;
    cout << "Global num is: " << num << " in global example - end" << endl;
}

void static_local_example(){
    static int num{5000};
    cout << "\nLocal static num is: " << num << " in static local example" << endl;
    num += 1000;
    cout << "Local static num is: " << num << " in static local example" << endl;
}
