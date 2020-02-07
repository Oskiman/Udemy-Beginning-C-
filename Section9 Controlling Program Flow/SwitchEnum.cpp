// Section 9
// Switch statement using enumeration

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
    
    enum direction{left, right, up, down};
    
    direction heading{left};
    
    switch(heading){
        case left:
        cout << "Going left" << endl;
        break;
        case right:
        cout << "Going right" << endl;
        break;
        // Other values 'up' & 'down' not handled in switch which generates warnings
        // Using a default case would help but I can't be bothered
    }
    std::cout << std::endl;
    return 0;
}