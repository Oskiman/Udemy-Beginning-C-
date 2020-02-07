// Section 12 Pointers & References
// Dynamic memory

#include <iostream>

using namespace std;

int main(){
    
    int *int_ptr{nullptr};
    int_ptr = new int;
    cout << int_ptr << endl;
    delete int_ptr;         // Release memory
    
    size_t size{0};
    double *temp_ptr{nullptr};
    
    cout << "How many doubles?: ";
    cin >> size;
    
    temp_ptr = new double[size];        // Create array of doubles of size size
    
    for(size_t i{0}; i < size; ++i){    
    temp_ptr[i] = i;                                // Populate elements
    cout << temp_ptr[i] << " " << temp_ptr + i << " " << endl;             // Output contents & addresses of elements
    cout << *temp_ptr << " " << temp_ptr << " " << endl;      // Output is 0, why? Pointer always points to first element which is 0, then sub[] or offset + step in        
    }
    
    delete [] temp_ptr;     // Release memory
    
    cout << endl;
    cout << temp_ptr << endl;   // Pointer still exists, points to same location
    cout << *temp_ptr << endl;  // Contains ?
    
    std::cout << std::endl;
    return 0;
}