// Section 10 
// Video Code Snippets

#include <iostream>
#include <string>

// Using namespace for brevity's sake
using namespace std;

int main(){
    
//    string s1;              // Empty - C++ strings are always initialised
//    string s2{"Frank"};     // Initialised to 'Frank'
//    string s3{s2};          // Initialised to s2, 'Frank'
//    string s4{"Frank", 3};  // Initiliased to 'Fra'
//    string s5{s3, 0, 2};    // Initialised to s2 'Fr'
//    string s6(3, 'X');      // Initialised to 'XXX', note parens, not curlies! (Constructor syntax)
//    
//    cout << s1 << endl;
//    cout << s2 << endl;
//    cout << s3 << endl;
//    cout << s4 << endl;
//    cout << s5 << endl;
//    cout << s6 << endl;
    
//    string s1;
//    s1 = "C++ Rocks!";  // Assign to s1
//    string s2{"Hello"}; // Initialise s2
//    cout << s1 << endl;
//    cout << s2 << endl;
//    s2 = s1;            // Copy s1 to s2
//    cout << s2 << endl;
//    s1 = "C++ strings can grow and shrink";
//    cout << s1 << endl;
//    s1 = "dynamically";
//    cout << s1 << endl;
//
//    string part1{"C++"};
//    string part2{"is a powerful"};
//    
//    string sentence;
//    
//    sentence = part1 + " " + part2 + " " + "language";
//    cout << sentence << endl;
//    
//    //sentence = "C++" + " is powerful";  // Illegal, will cause an error, cannot concatenate 2 C-style string literals

//    string s1;
//    string s2{"Frank"};
//    
//    cout << s2[0] << endl;  // Outputs 'F'
//    cout << s2.at(0) << endl;   // Outputs 'F';
//    
//    s2[0] = 'f';    // Change character at position 0
//    cout << s2 << endl;
//    s2.at(0) = 'p'; // Change character at position 0
//    cout << s2 << endl;
//    
//    for(char letter: s2){
//        cout << letter << endl;
//    }
//    
//    for(int letter : s2){
//        cout << letter << endl;
//    }
//    
//    for(char letter : s2){
//        letter = toupper(letter);
//        cout << letter << endl;
//    }

//    string s1{"Apple"};
//    string s2{"Banana"};
//    string s3{"Kiwi"};
//    string s4{"apple"};
//    string s5{s1};
//    
//    cout << boolalpha;
//    
//    cout << "s1 = s5 is " << (s1 == s5) << endl;
//    cout << "s1 = s2 is " << (s1 == s2) << endl;
//    cout << "s1 != s2 is " << (s1 != s2) << endl;
//    cout << "s1 < s2 is " << (s1 < s2) << endl;
//    cout << "s2 > s1 is " << (s2 > s1) << endl;
//    cout << "s4 < s5 is " << (s4 < s5) << endl;
//    cout << "s1 = Apple is " << (s1 == "Apple") << endl;

//    string s1{"This is a test"};
//    
//    cout << boolalpha;
//    
//    cout << s1.substr(0, 4);
//    cout << s1.substr(5, 2);
//    cout << s1.substr(10, 4);
//    
//    cout << endl;
//    
//    cout << s1.find("This") << endl;
//    cout << s1.find("is") << endl;
//    cout << s1.find("test") << endl;
//    cout << s1.find("e") << endl;
//    cout << s1.find("is", 4) << endl;
//    cout << s1.find("XX") << endl;

//    string s1{"This is a test"};
//    
//    cout << s1.erase(0, 5) << endl;
//    cout << s1.erase(5, 4) << endl;
//    s1.clear();

//    string s1{"Frank"};
//    
//    cout << s1.length() << endl;
//    
//    s1 += " James";
//    cout << s1.length() << endl;

    string s1;
//    cin >> s1;      // Only reads up to first whitespace
//    
//    cout << s1 << endl;
    
    getline(cin, s1);       // Reads up to \n
    cout << s1 << endl;
    
    getline(cin, s1, 'x');  // Reads up to first 'x' input
    cout << s1 << endl;
    
    std::cout << std::endl;
    return 0;
}