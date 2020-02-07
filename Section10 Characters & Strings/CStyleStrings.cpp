// Section 10 Characters & Strings
// C Style strings

#include <cctype>
#include <cstring>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(){
    
    char first_name[20]{};
    char last_name[20]{};
    char full_name[50]{};
    char temp[50]{};
    
    //cout << first_name << endl;     // Will display garbage
    
//    cout << "Please enter your first name: ";
//    cin >> first_name;
//    
//    cout << "Please enter your last name: ";
//    cin >> last_name;
//    
//    cout << "--------------------------------------------" << endl;
//    
//    cout << "Hello " << first_name << " your first name has " << strlen(first_name) << " characters" << endl;
//    cout << "and your last name has " << strlen(last_name) << " characters" << endl;
//    
//    strcpy(full_name, first_name);
//    strcat(full_name, " ");
//    strcat(full_name, last_name);
//    cout << "Your full name is " << full_name << endl;
//    cout << "Your full name has " << strlen(full_name) << " characters" << endl;
//    
//    cout << "---------------------------------------------" << endl;
//    
//    cout << "Please enter your full name: ";
//    cin >> full_name;
//    cout << "Your full name is " << full_name << endl;
//    
    cout << "Please enter your full name: ";
    cin.getline(full_name, 50);
    cout << "Your full name is " << full_name << endl;

    cout << "------------------------------------------------" << endl;
    strcpy(temp, full_name);
    if(strcmp(temp, full_name) == 0){
        cout << temp << " and " << full_name << " are the same" << endl;
    }
    else{
        cout << temp << " and " << full_name << " are different" << endl;
    }
    
    for(size_t i{}; i < strlen(full_name); ++i){
        if(isalpha(full_name[i])){
            full_name[i] = toupper(full_name[i]);
        }
    }
    
    cout << "Your full name in caps is: " << full_name << endl;
    cout << "---------------------------------------------" << endl;
    if(strcmp(temp, full_name) == 0){
        cout << temp << " and " << full_name << " are the same" << endl;
    }
    else{
        cout << temp << " and " << full_name << " are different" << endl;
    }
    
    cout << "----------------------------------------------" << endl;
    cout << "Result of comparing " << temp << " and " << full_name << " is " << strcmp(temp, full_name) << endl;
    cout << "Result of comparing " << full_name << " and " << temp << " is " << strcmp(full_name, temp) << endl;
    
    std::cout << std::endl;
    return 0;
}