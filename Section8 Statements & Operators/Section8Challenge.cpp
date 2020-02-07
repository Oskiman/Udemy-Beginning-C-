// Section 8 Statements & Operators
// Section Challenge
// Ask for input, number of cents
// Output correct change in dollars, quarters etc.

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
    
    // Constants for coin values
    const int dollar{100};
    const int quarter{25};
    const int dime{10};
    const int nickel{5};
    const int penny{1};
    
    cout << "Please enter an amount in cents:";
    int amount_in_cents{0};
    cin >> amount_in_cents;
    
    int num_of_dollars{0};
    int remainder{0};
    num_of_dollars = amount_in_cents / dollar;
    remainder = amount_in_cents % dollar;
    
    int num_of_quarters{0};
    num_of_quarters = remainder / quarter;
    remainder %= quarter;
    
    int num_of_dimes{0};
    num_of_dimes = remainder / dime;
    remainder %= dime;
    
    int num_of_nickels{0};
    num_of_nickels = remainder / nickel;
    remainder %= nickel;
    
    int num_of_pennies{remainder};
    
    cout << amount_in_cents << " cents can be changed as follows: " << endl;
    cout << "Dollars:" << num_of_dollars << endl;
    cout << "Quarters: " << num_of_quarters << endl;
    cout << "Dimes: " << num_of_dimes << endl;
    cout << "Nickels: " << num_of_nickels << endl;
    cout << "Pennies: " << num_of_pennies << endl;
    
    std::cout << std::endl;
    return 0;
}