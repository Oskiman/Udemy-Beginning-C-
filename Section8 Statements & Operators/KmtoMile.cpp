// Section 8 Statements & Operators
// Kilometres to Miles

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
    
    const double km_to_mile{0.6214712};
    
    cout << "Please enter a distance in kilometres: ";
    double km{0};
    double miles{0};
    cin >> km;
    
    miles = km * km_to_mile;
    
    cout << km << " kilometres is equivalent to " << miles << " miles" << endl;
    std::cout << std::endl;
    return 0;
}