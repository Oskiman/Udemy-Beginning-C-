// Section 7 Arrays & Vectors
// Code snippets copied from the tutorial video
// for an extra bit of practice

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
    
    // Initialising array
    int test_scores [5]{100, 95, 99, 87, 85};
    
    cout << "First score at index 0 is: " << test_scores[0] << endl;
    cout << "Second score at index 1 is: " << test_scores[1] << endl;
    cout << "Third score at index 2 is: " << test_scores[2] << endl;
    cout << "Fourth score at index 3 is: " << test_scores[3] << endl;
    cout << "Fifth score at index 4 is: " << test_scores[4] << endl;
    
    // Changing array elements
    cout << "Please input new test scores" << endl;
    cin >> test_scores[0];
    cin >> test_scores[1];
    cin >> test_scores[2];
    cin >> test_scores[3];
    cin >> test_scores[4];
    
    
    cout << "First score at index 0 is now: " << test_scores[0] << endl;
    cout << "Second score at index 1 is now: " << test_scores[1] << endl;
    cout << "Third score at index 2 is now: " << test_scores[2] << endl;
    cout << "Fourth score at index 3 is now: " << test_scores[3] << endl;
    cout << "Fifth score at index 4 is now: " << test_scores[4] << endl;
    
    std::cout << std::endl;
    return 0;
}