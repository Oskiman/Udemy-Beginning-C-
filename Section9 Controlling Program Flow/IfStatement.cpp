// Section 9 Controlling Program Flow
// If statement

#include <iostream>

using std::cin;
using std::cout;
using std::endl;


int main(){
    
    int num{0};
    const int min{10};
    const int max{100};
    
    cout << "Please enter a  number between " << min << " and " << max << ": ";
    cin >> num;
    
    if(num >= min){
        cout << "======================= If Statement 1 =======================" << endl;
        cout << num << " is greater than or equal to " << min << endl;
        
        int diff{num - min};
        cout << num << " is " << diff << " greater than " << min << endl;
    }
    
    if(num <= max){
        cout << "======================= If Statement 2 =======================" << endl;
        cout << num << " is less than or equal to " << max << endl;
        
        int diff{max - num};
        cout << num << " is " << diff << " less than " << max << endl;
    }
    
    if(num >= min && num <= max){
        cout << "======================= If Statement 3 =======================" << endl;
        cout << num << " is within bounds " << endl;
    }
    
    if(num == min || num == max){
        cout << "======================= If Statement 4 =======================" << endl;
        cout << num << " is on a boundary" << endl;
    }
    
    std::cout << std::endl;
    return 0;
}