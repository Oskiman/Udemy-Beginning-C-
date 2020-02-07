// Section 10 Characters & Strings
// C++ Strings

#include <iostream>
#include <iomanip>
#include <string>

using std::boolalpha;
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(){
    
    string s0;
    string s1{"Apple"};
    string s2{"Banana"};
    string s3{"Kiwi"};
    string s4{"apple"};
    string s5{s1};          // 'Apple'
    string s6{s1, 0, 3};    // 'App'
    string s7(10, 'X');     // XXXXXXXXXX
    
//    cout << s0 << endl;        // No garbage
//    cout << s0.length() << endl;
//    
//    cout << "======================== Initialisation ===============================" << endl;
//    cout << "s1 is initialised to: " << s1 << endl;
//    cout << "s2 is initialised to: " << s2 << endl;
//    cout << "s3 is initialised to: " << s3 << endl;
//    cout << "s4 is initialised to: " << s4 << endl;
//    cout << "s5 is initialised to: " << s5 << endl;
//    cout << "s6 is initialised to: " << s6 << endl;
//    cout << "s7 is initialised to: " << s7 << endl;
    
//    cout << "========================= Comparison ==================================" << endl;
//    cout << boolalpha;
//    
//    cout << s1 << " == " << s5 << ": " << (s1 == s5) << endl;
//    cout << s1 << " == " << s2 << ": " << (s1 == s2) << endl;
//    cout << s1 << "!= " << s2 << ": " << (s1 != s2) << endl;
//    cout << s1 << " < " << s2 << ": " << (s1 < s2) << endl;
//    cout << s2 << " > " << s1 << ": " << (s2 > s1) << endl;
//    cout << s4 << " < " << s5 << ": " << (s4 < s5) << endl;
//    cout << s1 << " == " << "Apple" << ": " << (s1 == "Apple") << endl;

//    cout << "=========================== Assignment =================================" << endl;
//    s1 = "Watermelon";
//    cout << "s1 is now: " << s1 << endl;
//    s2 = s1;
//    cout << "s2 is now: " << s2 << endl;
//    
//    s3 = "Frank";
//    cout << "s3 is now: " << s3 << endl;
//    
//    s3[0] = 'C';
//    cout << "s3 is now: " << s3 << endl;
//    
//    s3.at(0) = 'P';
//    cout << "s3 is now: " << s3 << endl;

//    cout << "============================= Concatenation ============================" << endl;
//    s3 = s5 + " and " + s2 + " juice";
//    cout << "s3 is now: " << s3 << endl;
//    
//    cout << "============================= Looping ==================================" << endl;
//    for(size_t i{0}; i < s1.length(); ++i){
//        cout << s1.at(i) << endl;
//    }
//    
//    // Range based for loop
//    for(auto c : s1){
//        cout << c << endl;
//    }
//    
//    for(int c : s1){
//        cout << c << endl;
//    }
//
//    cout << "================================ Substring ==============================" << endl;
//    s1 = "This is a test";
//    cout << s1.substr(0, 4) << endl;
//    cout << s1.substr(5, 2) << endl;
//    cout << s1.substr(10, 4) << endl;
    
//    cout << "================================ Erase =================================" << endl;
//    s1 = "This is a test";
//    cout << s1 << endl;
//    s1.erase(0, 5);
//    cout << "s1 is now: " << s1 << endl;

//    cout << "================================== Getline ===============================" << endl;
//    string full_name;
//    cout << "Please enter your full name: ";
//    getline(cin, full_name);
//    
//    cout << "Your full name is: " << full_name << endl;

    cout << "===================================== Find =================================" << endl;
    s1 = "The secret word is boo";
    string word{};
    
    cout << "Enter the word to find: ";
    cin >> word;
    
    size_t position = s1.find(word);
    if(position != string::npos){
        cout << "Found " << word << " at position " << position << endl;
    }
    else{
        cout << "Sorry " << word << " not found!" << endl;
    }
    
    std::cout << std::endl;
    return 0;
}