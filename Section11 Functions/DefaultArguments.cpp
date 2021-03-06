// Section 11 Functions
// Default Arguments

#include <iomanip>
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;
using std::string;

// Function Prototypes
double calc_cost(double base_cost = 100.0, double tax_rate = 0.06, double shipping = 3.50);
void greeting(string name, string prefix = "Mr.", string suffix = "");

int main(){
    
    double cost{0};
    cost = calc_cost(100.0, 0.08, 4.25);        // Will use no defaults 100 + 8 + 4.25
    
    cout << fixed << setprecision(2);
    cout << "Cost is: " << cost << endl;        // 112.25
    
    cost = calc_cost(100.0, 0.08);               // Will use default shipping, 100 + 8 + 3.50
    cout << "Cost is: " << cost << endl;        // 111.50
    
    cost = calc_cost(200.0);                    // Will use default tax & shipping, 200 + 12 + 3.50
    cout << "Cost is: " << cost << endl;        //215.50
    
    cost = calc_cost();                         // Will use all defaults 100 + 6 + 3.50
    cout << "Cost is: " << cost << endl;        // 109.50
    
    greeting("Glenn Jones", "Dr.", "M.D.");
    greeting("James Rogers", "Professor", "Ph.D");
    greeting("Frank Miller", "Dr.");
    greeting("William Smith");
    greeting("Mary Howard", "Mrs.", "Ph.D");
    
    std::cout << std::endl;
    return 0;
}

// Functions
double calc_cost(double base_cost, double tax_rate, double shipping){
    return base_cost += (base_cost * tax_rate) + shipping;
}

void greeting(string name, string prefix, string suffix){
    cout << "Hello " + prefix + " " + name + " " + suffix << endl;
}