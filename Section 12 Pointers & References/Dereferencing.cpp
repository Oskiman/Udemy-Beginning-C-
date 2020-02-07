// Section 12 Pointers & References
// Dereferencing

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    
    int score{100};
    int *score_ptr{&score};
    
    cout << *score_ptr << endl;     // 100
    
    *score_ptr = 200;
    
    cout << *score_ptr << endl;     // 200
    cout << score << endl;          // 200
    
    cout << "=========================================================" << endl;
    
    double high_temp{100.7};
    double low_temp{37.2};
    
    double *temp_ptr{&high_temp};
    
    cout << *temp_ptr << endl;
    //*temp_ptr = low_temp;     // I did it this way, dereference pointer then change contents
    temp_ptr = &low_temp;       // Tutorial version, tell pointer to point elsewhere, less scope for mistakes?
    cout << *temp_ptr << endl;
    
    cout << "==========================================================" << endl;
    
    string name{"Frank"};
    string *string_ptr{&name};
    
    cout << *string_ptr << endl;
    name = "James";
    cout << *string_ptr << endl;
    
    cout << "==========================================================" << endl;
    
    vector<string> stooges{"Larry", "Moe", "Curly"};
    vector<string> *vector_ptr{nullptr};
    
    vector_ptr = &stooges;
    
    cout << "First stooge: " << (*vector_ptr).at(0) << endl;
    cout << "Second stooge: " << (*vector_ptr).at(1) << endl;
    cout << "Third stooge: " << (*vector_ptr).at(2) << endl;
    
    cout << "Stooges: ";
    for(auto name : *vector_ptr)
        cout << name << " ";
    cout << endl;
    
    std::cout << std::endl;
    return 0;
}