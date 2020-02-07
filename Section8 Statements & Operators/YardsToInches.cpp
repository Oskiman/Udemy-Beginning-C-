// Section 8 Statements & Operators
// Yards to inches

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
    
    const double inches_in_yard{36.0};
    
    cout << "please enter a distance in yards: ";
    double yards{0.0};
    double inches{0.0};
    cin >> yards;
    inches = yards * inches_in_yard;
    
    cout << yards << " is equivalent to " << inches << " inches" << endl;
    std::cout << std::endl;
    return 0;
}