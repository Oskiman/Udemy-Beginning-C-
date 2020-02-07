// Section 8 Statements & Operators
// Stones to pounds

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
    
    const double pounds_in_stone{14.0};
    
    cout << "Enter a weight in stones: ";
    double stones{0.0};
    double pounds{0.0};
    cin >> stones;
    pounds = stones * pounds_in_stone;
    
    cout << stones << " is equivalent to " << pounds << " pounds" << endl;
    std::cout << std::endl;
    return 0;
}