// Section 8 Statements & Operators
// Logical Operators

#include <iostream>

using std::boolalpha;
using std::cin;
using std::cout;
using std::endl;
using std::noboolalpha;

int main(){
    
    int num{0};
    const int lower{10};
    const int upper{20};
    
    cout << boolalpha;
    
    // Determine if an entered integer is between 2 other integers
    // Assume lower < upper
//    cout << "Enter an integer, the bounds are " << lower << " and " << upper << " : ";
//    cin >> num;
//    
//    bool within_bounds{false};
//    
//    within_bounds = (num > lower && num < upper);
//    cout << num << " is between " << lower << " and " << upper << ": " << within_bounds << endl;
    
    // Determine if an entered integer is outside 2 other integers
    // Assume lower < upper
//    cout << "Enter an integer, the bounds are " << lower << " and " << upper << " : ";
//    cin >> num;
//    
//    bool outside_bounds{false};
//    
//    outside_bounds = (num < lower || num > upper);
//    cout << num << " is outside " << lower << " and " << upper << ": " << outside_bounds << endl;
//    
    // Determine if an entered integer is exactly on the boundary
    // Assume lower < upper
//    cout << "Enter an integer, the bounds are " << lower << " and " << upper << " : ";
//    cin >> num;
//    
//    bool on_bounds{false};
//    
//    on_bounds = (num == lower || num == upper);
//    cout << num << " is exactly on " << lower << " or " << upper << ": " << on_bounds << endl;
//    

    // Determine if you need to wear a coat determined by temperature & wind speed
    bool wear_coat{false};
    double temperature{0.0};
    int wind_speed{0};
    
    const int wind_speed_for_coat{25};      // Wind over this value requires a coat
    const int temperature_for_coat{45};     // Temperature below this value requires a coat
    
    // Require a coat if wind speed too high or temperature too low
    cout << "Enter the current temperature: ";
    cin >> temperature;
    cout << "Enter wind speed: ";
    cin >> wind_speed;
    
    wear_coat = (temperature < temperature_for_coat || wind_speed > wind_speed_for_coat);
    cout << "Do you need to use a coat wearing OR?: " << wear_coat << endl;
    
    wear_coat = (temperature < temperature_for_coat && wind_speed > wind_speed_for_coat);
    cout << "Do you need to use a coat wearing AND?: " << wear_coat << endl;
    
    std::cout << std::endl;
    return 0;
}