// Section 12 Pointers & References
// Debugger

#include <iostream>

using namespace std;

// Function declarations
void swap(int *a, int *b);

int main(){
    
    int i{5};
    
    while(i > 0){
        cout << i << endl;
        i--;
    }
    
    int x{100}, y{200};
    cout << "\nx: " << x << endl;
    cout << "y: " << y << endl;
    
    swap(&x, &y);
    
    cout << "\nx: " << x << endl;
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