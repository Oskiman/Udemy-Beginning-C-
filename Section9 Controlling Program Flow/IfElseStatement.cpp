// Section 9 Controlling Program Flow
// If/Else statement

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
    
    int num{0};
    const int target{10};
    
    cout << "Enter a number and i'll compare it to " << target << ": ";
    cin >> num;
    
    if(num >= target){
        cout << "\n=========================================================" << endl;
        cout << num << " is greater than or equal to " << target << endl;
        int diff{num - target};
        cout << num << " is " << diff << " greater than " << target << endl;
    }
    
    else{
        cout << "\n=========================================================" << endl;
        cout << num << " is less than " << target << endl;
        int diff{target - num};
        cout << num << " is " << diff << " less than " << target << endl;
    }
    std::cout << std::endl;
    return 0;
}