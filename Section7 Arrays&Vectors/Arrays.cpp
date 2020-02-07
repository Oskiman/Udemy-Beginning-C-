// Section 7 Arrays & Vectors
// Arrays

#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main(){
    
    char vowels[]{'a', 'e', 'i', 'o', 'u'};
    cout << "The first vowel is " << vowels[0] << endl;
    cout << "The last vowel is " << vowels[4] << endl;
    
    // Attempt to access an out of bounds element
    // Edit: Doesn't crash still wrong though
//    cin >> vowels[5];
//    cout << vowels[5] << endl;
    
    double hi_temps[]{90.1, 89.8, 77.5, 81.6};
    cout << "The first high temperature is " << hi_temps[0] << endl;
    
    hi_temps[0] = 100.7;
    
    cout << "The first high temperature is now " << hi_temps[0] <<endl;
    
    int test_scores [5]{100, 90};   // Initialises first 2 elements, rest to 0
    
    cout << "First score at index 0 is: " << test_scores[0] << endl;
    cout << "Second score at index 1 is: " << test_scores[1] << endl;
    cout << "Third score at index 2 is: " << test_scores[2] << endl;
    cout << "Fourth score at index 3 is: " << test_scores[3] << endl;
    cout << "Fifth score at index 4 is: " << test_scores[4] << endl;
    cout << endl;
    
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
    cout << endl;
    
    // Output the address of each array (first element)
    cout << "Array addresses" << endl;
    cout << vowels << endl;
    cout << hi_temps << endl;
    cout << test_scores << endl;
    cout << endl;
    
    
    std::cout << std::endl;
    return 0;
}