// Section 12 Pointers & References
// Passing Pointers 3

#include <iostream>
#include <string>
#include <vector>

using namespace std;

//Function declarations
void display(const vector <string> *const v);
void display(int *array, int sentinel);
int main(){
    
    cout << "===============================================" << endl;
    vector <string> stooges{"Larry", "Moe", "Curly"};
    display(&stooges);
    
    cout << "\n=============================================" << endl;
    int scores []{100, 98, 97, 79, 85, -1};
    display(scores, -1);
    
    std::cout << std::endl;
    return 0;
}

// Function definitions
void display(const vector <string> *const v){
    //(*v).at(0) = "Funny";   // Demo of why const should be used in a display function
    for(auto str: *v){
        cout << str << " ";
    }
    
    //v = nullptr;            // Demo of why const should be used in a display function
    
    cout << endl;
}

void display(int *array, int sentinel){
    while(*array != sentinel){
        cout << *array++ << endl;
    }
    
    cout << endl;
}