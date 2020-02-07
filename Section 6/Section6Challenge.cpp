// Section 6 Challenge
// Adapt the code from the Constants section to include
// small & large rooms with different prices

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
    
    cout << "Hello, welcome to Frank's Carpet Cleaning business" << endl;
    cout << "Small rooms are $25 each" << endl;
    cout << "Large rooms are $35 each" << endl;
    cout << "Sales tax is 6%" << endl;
    cout << "Estimates are valid for 30 days" << endl;
    
    cout << "How many small rooms would you like cleaned?:";
    int number_of_small_rooms{0};
    cin >> number_of_small_rooms;
    
    cout << "How many large rooms would you like cleaned?:";
    int number_of_large_rooms{0};
    cin >> number_of_large_rooms;
    
    
    // Defined constants for use instead of literals
    const double price_per_small_room{25.0};
    const double price_per_large_room{35.0};
    const double sales_tax{0.06};
    const int estimate_expiry{30};
    
    // Variables to avoid doing the same calculation repeatedly
    double large_room_cost{number_of_large_rooms * price_per_large_room};
    double small_room_cost{number_of_small_rooms * price_per_small_room};
    double total_room_cost{small_room_cost + large_room_cost};
    
    cout << "Estimate for Carpet Cleaning" << endl;
    cout << "Number of large rooms: " << number_of_large_rooms << endl;
    cout << "Price per large room: $" << price_per_large_room << endl;
    cout << "Number of small rooms: " << number_of_small_rooms << endl;
    cout << "Price per small room: $" << price_per_small_room << endl;
    cout << "Cost: $" << total_room_cost << endl;
    cout << "Tax: $" << total_room_cost * sales_tax << endl;
    cout << "==============================================" << endl;
    cout << "Total estimate: $" << (total_room_cost) + (total_room_cost * sales_tax) << endl;
    cout << "This estimate is valid for " << estimate_expiry << " days" << endl;
    
    cout << endl;
    return 0;
}