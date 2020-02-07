// Section 8 Statements & Operators
// Convert US$ to Euros

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
    
    const double usd_per_eur{1.19};
    
    cout << "Please enter an amount of Euros: ";
    double euros{0.0};
    double dollars{0.0};
    
    cin >> euros;
    dollars = euros * usd_per_eur;
    
    cout << euros << " Euros is equivalent to " << dollars << " dollars" << endl;
    cout << endl;
    return 0;
}