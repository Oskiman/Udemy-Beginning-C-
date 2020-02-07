// Section 6
// Constants

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
    cout << "Hello, welcome to Frank's Carpet Cleaning business" << endl;
    cout << "How many rooms would you like cleaned?:";
    
    int number_of_rooms{0};
    cin >> number_of_rooms;
    
    // The code block below uses literal constants (magic numbers)
    // This is not good practice
    cout << "Estimate for Carpet Cleaning" << endl;
    cout << "Number of rooms: " << number_of_rooms << endl;
    cout << "Price per room: $" << 30 << endl;
    cout << "Cost: $" << number_of_rooms * 30 << endl;
    cout << "Tax: $" << 30 * number_of_rooms * 0.06 << endl;
    cout << "==============================================" << endl;
    cout << "Total estimate: $" << (30 * number_of_rooms) + (30 * number_of_rooms * 0.06) << endl;
    cout << "This estimate is valid for " << 30 << " days" << endl;
    
    // The code block below has been refactored to use defined constants
    // which is best practice, it makes changing values a lot easier
    // needs doing in one place only
    
    // Defined constants for use instead of literals
    const double price_per_room{30.0};
    const double sales_tax{0.06};
    const int estimate_expiry{30};
    
    // Variable to avoid doing the same calculation repeatedly
    double room_cost{number_of_rooms * price_per_room};
    
    cout << endl;
    cout << "Estimate for Carpet Cleaning" << endl;
    cout << "Number of rooms: " << number_of_rooms << endl;
    cout << "Price per room: $" << price_per_room << endl;
    cout << "Cost: $" << room_cost << endl;
    cout << "Tax: $" << room_cost * sales_tax << endl;
    cout << "==============================================" << endl;
    cout << "Total estimate: $" << (room_cost) + (room_cost * sales_tax) << endl;
    cout << "This estimate is valid for " << estimate_expiry << " days" << endl;
    std::cout << std::endl;
    return 0;
}