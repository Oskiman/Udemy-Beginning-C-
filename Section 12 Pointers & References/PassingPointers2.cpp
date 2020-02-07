// Section 12 Pointers & References
// Passing Pointers 2

#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Function declarations
void swap(int *a, int *b);

int main(){
    
    int x{100}, y{200};
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
    
    swap(&x, &y);
    
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
    
    std::cout << std::endl;
    return 0;
}

// Function definitions
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}