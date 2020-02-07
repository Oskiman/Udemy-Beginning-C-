// Section 9 Controlling Program Flow
// Shipping cost calculator

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
    
    int length{0}, width{0}, height{0};
    double base_cost{2.50};
    
    const int tier_1_threshold{100};
    const int tier_2_threshold{500};
    
    int max_dimension_length{10};
    
    double tier_1_surcharge{0.10};
    double tier_2_surcharge{0.25};
    
    int package_volume{};
    
    cout << "Package cost calculator" << endl;
    cout << "Enter length, width & height separated by spaces: ";
    cin >> length >> width >> height;
    
    if(length > max_dimension_length || width > max_dimension_length || height > max_dimension_length){
        cout << "Sorry, package too large" << endl;
    }
    else{
        double package_cost{};
        package_volume = length * width * height;
        package_cost = base_cost;
        
        if(package_volume > tier_2_threshold){
            package_cost += package_cost * tier_2_surcharge;
        }
        else if(package_volume > tier_1_threshold){
            package_cost += package_cost * tier_1_surcharge;
        }
        
        cout << "The volume of your package is " << package_volume << endl;
        cout << "Your package will cost $" << package_cost << " to ship" << endl;
        
    }
    std::cout << std::endl;
    return 0;
}