// Section 6 Variables & Constants
// Initialising Variables

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
    
    // Best practice is to declare variables close to where they are initially used
    //int room_width{0};
    //int room_length{0};
    
    cout << "Enter the width of the room:";
    int room_width{0};
    cin >> room_width;
    cout << "Enter the length of the room:";
    int room_length{0};
    cin >> room_length;
    
    cout << "The area of the room is " << room_width * room_length << " square feet!" << endl;
    std::cout << std::endl;
    return 0;
}