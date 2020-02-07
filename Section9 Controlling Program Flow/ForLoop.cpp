// Section 9 Controlling Program Flow
// For loop

#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main(){
    
//    for(int i{}; i <= 10; ++i){
//        cout << i << endl;
//    }
    
//    for(int i{1}; i <= 10; i += 2){
//        cout << i << endl;
//    }

//    for(int i{10}; i > 0; --i){
//        cout << i << endl;
//    }
//    cout << "Blastoff" << endl;

//    for(int i{10}; i < 100; i += 10){
//        if(i % 15 == 0)
//            cout << i << endl;
//    }

//    for(int i{1}, j{5}; i <= 5; ++i, ++j){
//        cout << i << " + " << j << " = " << (i + j) << endl;
//    }

//    for(int i{1}; i <= 100; ++i){
//        cout << i;
//        if(i % 10 == 0){
//            cout << endl;
//        }
//        else{
//            cout << " ";
//        }
//    }
    
    // Overthinking things again
    //cout << (((int i{1}; i <= 100; ++i)i % 10) ? endl : " ")
    
//    for(int i{1}; i <= 100; ++i){
//        cout << i << ((i % 10 == 0) ? "\n" : " ");   // Originally used endl which didn't work, has to be \n
//    }

    vector <int> nums{10, 20, 30, 40, 50};
    for(size_t i{0}; i < nums.size(); ++i){     // size_t removes warning of comparing signed/unsigned integers, could also use unsigned
        //cout << nums[i] << endl;              // Array subscript
        cout << nums.at(i) << endl;             // Vector .at() method
    }
    
    std::cout << std::endl;
    return 0;
}