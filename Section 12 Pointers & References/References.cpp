// Section 12 Pointers & References
// References

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    
    int num{100};
    int &ref{num};
    
    cout << num << endl;
    cout << ref << endl;
    
    num = 200;
    cout << "\n=====================================" << endl;
    cout << num << endl;
    cout << ref << endl;
    
    ref = 300;
    cout << "\n=====================================" << endl;
    cout << num << endl;
    cout << ref << endl;
    
    cout << "\n========================================" << endl;
    vector <string> stooges{"Larry", "Moe", "Curly"};
    
    for(auto str : stooges)
        str = "Funny";          // Copy of elements is changed
        
    for(auto str : stooges)
        cout << str << endl;
        
    cout << "==========================================" << endl;    
    for(auto &str : stooges)    // &str is a reference to each element
        str = "Funny";          // Elements are changed
        
    for(auto const &str : stooges)
        cout << str << endl;
    
    std::cout << std::endl;
    return 0;
}