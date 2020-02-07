// Section 12 Pointers & References
// Pointer arithmetic

#include <iostream>

using namespace std;

int main(){
    
    int scores []{100, 95, 89, 68, -1};
    int *score_ptr{scores};
    
    while(*score_ptr != -1){
        cout << *score_ptr << endl;
        score_ptr++;
    }
    
    cout << "==============================================" << endl;
    
    score_ptr = scores;
    
    while(*score_ptr != -1){
        cout << *score_ptr++ << endl;   // Pointer is dereferenced, pointer is incremented, NOT what pointer is pointing to
    }
    
//    while(*score_ptr != -1){                // Endless loop, starts at 100, dereferences pointer, increments data +1 continously, not what we want!
//        cout << (*score_ptr) ++ << endl;
//    }

    cout << "==============================================" << endl;
    string s1{"Frank"};
    string s2{"Frank"};
    string s3{"James"};
    
    string *p1{&s1};
    string *p2{&s2};
    string *p3{&s1};
    
    cout << boolalpha;
    
    cout << p1 << " == " << p2 << ": " << (p1 == p2) << endl;   // False
    cout << p1 << " == " << p3 << ": " << (p1 == p3) << endl;   // True
    
    cout << *p1 << " == " << *p2 << ": " << (*p1 == *p2) << endl;   // True
    cout << *p1 << " == " << *p3 << ": " << (*p1 == *p3) << endl;   // True
    
    p3 = &s3;       // Point to James
    cout << *p1 << " == " << *p3 << ": " << (*p1 == *p3) << endl;   // Now false
    
    cout << "==============================================" << endl;
    
    char name[]{"Frank"};
    
    char *char_ptr_1{nullptr};
    char *char_ptr_2{nullptr};
    
    char_ptr_1 = &name[0];      // F
    char_ptr_2 = &name[3];      // n
    
    cout << "In the string " << name << ", " << *char_ptr_2 << " is " << (char_ptr_2 - char_ptr_1) << " characters away from " << *char_ptr_1 << endl;
    
    std::cout << std::endl;
    return 0;
}