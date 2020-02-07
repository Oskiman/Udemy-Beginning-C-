// Section 11 Functions
// Function overloading
// All functions are called 'print', the correct version is called depending
// on the argument calls to each function

#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

// Function prototypes
void print(int);
void print(double);
void print(string);
void print(string, string);
void print(vector <string>);

int main(){
    
    print(100);
    print('A');     // Char always promoted to int, will print 65 ascii
    
    print(123.5);
    print(123.3f);  // Float promoted to double
    
    print("C - style string");  // Converted to C++ string object
    
    string s{"C++ string"};
    print(s);
    
    print("C - style string", s);   // First argument converted to C++ string object
    
    vector <string> three_stooges{"Larry", "Moe", "Curly"};
    print(three_stooges);
    
    std::cout << std::endl;
    return 0;
}

// Functions

void print(int num){
    cout << "Printing int: " << num << endl;
}

void print(double num){
    cout << "Printing double: " << num << endl;
}

void print(string s){
    cout << "Printing string: " << s << endl;
}

void print(string s, string t){
    cout << "Printing 2 strings: " << s << " and " << t << endl;
}

void print(vector <string> v){
    cout << "Printing vector of strings: ";
    for(auto c : v)
        cout << c << " ";
    cout << endl;
}