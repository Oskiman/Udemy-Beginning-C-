// Section 8 Statements & Operators
// Pounds to Kilos

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
    
    const double kilo_in_pound{0.4535924};
    
    cout << "Enter a weight in pounds:";
    double pounds{0.0};
    double kilos{0.0};
    cin >> pounds;
    kilos = pounds * kilo_in_pound;
    
    cout << pounds << " pounds is equivalent to " << kilos << " kilos" << endl;
    std::cout << std::endl;
    return 0;
}