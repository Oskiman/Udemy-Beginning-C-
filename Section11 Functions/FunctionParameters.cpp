// Section 11 Functions
// Function Parameters

#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

// Function Prototypes
void pass_by_value_1(int num);
void pass_by_value_2(string s);
void pass_by_value_3(vector <string> v);
void print_vector(vector <string> v);


int main(){
    
    int num{10};
    int another_num{20};
    
    cout << "num before calling pass_by_value_1: " << num << endl;
    pass_by_value_1(num);
    cout << "num after calling pass_by_value_1: " << num << endl;
    
    cout << "another_num before calling pass_by_value_1: " << another_num << endl;
    pass_by_value_1(another_num);
    cout << "another_num after calling pass_by_value_1: " << another_num << endl;
    
    string name{"Frank"};
    cout << "name before calling pass_by_value_2: " << name << endl;
    pass_by_value_2(name);
    cout << "name after calling pass_by_value_2: " << name << endl;

    vector <string> stooges{"Larry", "Moe", "Curly"};
    cout << "stooges before calling pass_by_value_3: ";
    print_vector(stooges);
    pass_by_value_3(stooges);
    cout << "stooges after calling pass_by_value_3: ";
    print_vector(stooges);
    
    std::cout << std::endl;
    return 0;
}

void pass_by_value_1(int num){
    num = 1000;
}

void pass_by_value_2(string s){
    s = "changed";
}

void pass_by_value_3(vector <string> v){
    v.clear();      // clears all vector elements
}

void print_vector(vector <string> v){
    for(auto s : v){
        cout << s << " ";
    }
    cout << endl;
}