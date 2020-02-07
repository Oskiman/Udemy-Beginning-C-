// Section 11 Functions
// Random Numbers

#include <iostream>
#include <cstdlib>      // required for rand
#include <ctime>        // required for time

using std::cin;
using std::cout;
using std::endl;

int main(){
    
    int random_number{};
    size_t count{10};       // number of random numbers to generate
    int min{1};             // lower bound (inclusive)
    int max{6};             // upper bound (inclusive)
    
    // why not use min{1} max{7}? As far as I can see it generates between 1 - 6
    // then there is no need for random_number = rand() % max + min
    // it could just be random_number = rand() % max
    
    // seed the random number generator so we get a different sequence each run
    cout << "RAND MAX on my system is " << RAND_MAX << endl;
    
    //srand(time(nullptr));
    srand(time(0));         // can use 0 or nullptr 
    
    int running_total{};
    
    for(size_t i{1}; i <= count; ++i){
        random_number = rand() % max + min;     // generate random number 1 - 6
        cout << random_number << endl;
        running_total += random_number;
    }
    
    cout << "The total is: " << running_total << endl;
    
    
    
    std::cout << std::endl;
    return 0;
}