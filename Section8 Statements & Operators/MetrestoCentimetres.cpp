// Section 8 Statements & Operators
// Metres to centimetres

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
    
    const double cent_in_metre{100.0};
    
    cout << "Enter a distance in metres: ";
    double metres{0.0};
    double centimetres{0.0};
    cin >> metres;
    
    centimetres = metres * cent_in_metre;
    
    cout << metres << " is equivalent to " << centimetres << " centimetres" << endl;
    std::cout << std::endl;
    return 0;
}