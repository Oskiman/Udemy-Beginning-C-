// Section 12 Pointers & References
// Returning pointers

#include <iostream>

using namespace std;

// Function declarations
int *create_array(size_t size, int init_value = 0);
void display(const int *const array, size_t size);

int main(){
    
    int *my_array{nullptr};
    size_t size;
    int init_value{};
    
    cout << "How many integers would you like to allocate?: ";
    cin >> size;
    cout << "What would you like them initialised to?: ";
    cin >> init_value;
    
    my_array = create_array(size, init_value);
    cout << "=================================================" << endl;
    
    display(my_array, size);
    
    delete [] my_array;
    
    std::cout << std::endl;
    return 0;
}

// Function definitions
int *create_array(size_t size, int init_value){
    int *new_storage{nullptr};
    new_storage = new int[size];
    for(size_t i{0}; i < size; ++i){
        *(new_storage + i) = init_value;
    }
    return new_storage;
}

void display(const int *const array, size_t size){
    for(size_t i{0}; i < size; ++i){
        cout << array[i];
    }
    
    cout << endl;
        
}