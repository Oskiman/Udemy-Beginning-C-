// Section 9 Controlling Program Flow
// While loop

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
    
//    int num{0};
//    cout << "Enter a positive integer to start the countdown: ";
//    cin >> num;
//    
//    while(num > 0){
//        cout << num << endl;
//        --num;
//    }
//    
//    cout << "Blast off!" << endl;

//    int num{0};
//    cout << "Enter a number to count up to: ";
//    cin >> num;
//    
//    int i{1};
//    // In the video it was while(num >= i)
//    while(i <= num){
//        cout << i << endl;
//        ++i;
//    }
    
//     int num_input{0};
//    cout << "Enter a number less than 100: ";
//    cin >> num_input;
//    
//    while(num_input >= 100){
//        cout << "Enter a number less than 100: ";
//        cin >> num_input;
//    }
//    
//    cout << "Thanks!" << endl;
    
    
     bool done{false};
    int num{0};
    
    while(!done){
        cout << "Enter a number between 1 & 5: ";
        cin >> num;
        if(num <= 1 || num >= 5){
            cout << "Out of range, try again!" << endl;
        }
        else{
            cout << "Thankyou" << endl;
            done = true;
        }
    }
    std::cout << std::endl;
    return 0;
}