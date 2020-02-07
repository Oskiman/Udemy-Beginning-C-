// Section 11 Functions
// Arrays and functions

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

// Function prototypes
void print_array(const int arr[], size_t size);
void set_array(int arr[], size_t size, int value);

int main(){
    
    int my_scores[]{100, 98, 90, 86, 84};
    
    print_array(my_scores, 5);
    set_array(my_scores, 5, 100);
    print_array(my_scores, 5);
    print_array(my_scores, 5);
    
    std::cout << std::endl;
    return 0;
}

// Function definitions
void print_array(const int arr[], size_t size){
    for(size_t i{0}; i < size; ++i){
        cout << arr[i] << " ";
        }
        
    cout << endl;
    // Code to demonstrate usage of const, will cause compiler error
    //arr[0] = 50000;
}

// Set each array element to the given value
void set_array(int arr[], size_t size, int value){
    for(size_t i{0}; i < size; ++i){
        arr[i] = value;
    }
}



















