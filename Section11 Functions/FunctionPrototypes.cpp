// Section 11 Functions
// Function prototypes

#include <iostream>

// Function Prototypes
double calc_area_circle(double radius);
double calc_volume_cylinder(double radius, double height);
void volume_cylinder();
void area_circle();

using std::cin;
using std::cout;
using std::endl;

const double pi{3.14159};

int main(){
    
    area_circle();
    volume_cylinder();
    
    std::cout << std::endl;
    return 0;
}

double calc_area_circle(double radius){
    return pi * radius * radius;
}

double calc_volume_cylinder(double radius, double height){
    //return pi * radius * radius * height;
    return calc_area_circle(radius) * height;   // avoids code repetition, uses calc_area_circle()
}

void volume_cylinder(){
    double radius{};
    double height{};
    cout << "Enter the radius of a cylinder: ";
    cin >> radius;
    cout << "Enter the height of a cylinder: ";
    cin >> height;
    cout << "The volume of a cylinder with radius " << radius << " and height " << height << " is " << calc_volume_cylinder(radius, height) << endl;
}

void area_circle(){
    double radius{};
    cout << "Enter the radius of a circle: ";
    cin >> radius;
    cout << "The area of a circle with a radius of " << radius << " is " << calc_area_circle(radius) << endl;
}
