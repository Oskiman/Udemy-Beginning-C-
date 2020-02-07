// Section 6
// Sizeof Operator

#include <climits>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
    cout << "sizeof() information" << endl;
    cout << "============================================================" << endl;
    cout << "char " << sizeof(char) << " bytes" << endl;
    cout << "int " << sizeof(int) << " bytes" << endl;
    cout << "unsigned int " << sizeof(unsigned int) << " bytes" << endl;
    cout << "short " << sizeof(short) << " bytes" << endl;
    cout << "long " << sizeof(long) << " bytes" << endl;
    cout << "long long " << sizeof(long long) << " bytes" << endl;
    
    cout << "============================================================" << endl;
    cout << "float " << sizeof(float) << " bytes" << endl;
    cout << "double " << sizeof(double) << " bytes" << endl;
    cout << "long double " << sizeof(long double) << " bytes" << endl;
    
    cout << "============================================================" << endl;
    cout << "Minimum values" << endl;
    cout << "char: " << CHAR_MIN << endl;
    cout << "int: " << INT_MIN << endl;
    cout << "short:" << SHRT_MIN << endl;
    cout << "long: " << LONG_MIN << endl;
    cout << "long long: " << LLONG_MIN << endl;
    
    cout << "============================================================" << endl;
    cout << "Maximum values" << endl;
    cout << "char: " << CHAR_MAX << endl;
    cout << "int: " << INT_MAX << endl;
    cout << "short:" << SHRT_MAX << endl;
    cout << "long: " << LONG_MAX << endl;
    cout << "long long: " << LLONG_MAX << endl;
    
    cout << "============================================================" << endl;
    cout << "sizeof using variable names" << endl;
    int age{21};
    cout << "size of age (int) is " << sizeof(age) << " bytes" << endl;
    double wage{22.24};
    cout << "size of wage (double) is " << sizeof(wage) << " bytes" << endl;
    std::cout << std::endl;
    return 0;
}