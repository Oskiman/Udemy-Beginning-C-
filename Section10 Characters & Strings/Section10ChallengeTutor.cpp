// Section 10 Characters & Strings
// Challenge solution
// Code from tutorial

#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(){
    
    string alphabet{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key{"fghijklmnopqrstuvwxyzabcdeFGHIJKLMNOPQRSTUVWXYZABCDE"};
    
    string message{};
    cout << "Please enter the message to be encrypted: ";
    getline(cin, message);
    
     // Tutorial Solution
    cout << "\nEncrypting message..." << endl;
    
    string encrypted_message{};
    for(char c : message){
        size_t position = alphabet.find(c);     // Use find() method to look for character
        if(position != string::npos){           // If found  
            char newchar{key.at(position)};     // Copy letter at same position in key into newchar
            encrypted_message += newchar;       // Add newchar to encrypted message
        }
        else{
            encrypted_message += c;             // Add character 'as is' to encrypted message
        }
    }
    
    cout << encrypted_message << endl;
    cout << endl;
    cout << "Decrypting message..." << endl;
    
    string decrypted_message;
    for(char c : encrypted_message){
        size_t position = key.find(c);
        if(position != string::npos){
            char newchar{alphabet.at(position)};
            decrypted_message += newchar;
        }
        else{
            decrypted_message += c;
        }
    }
    
    cout << decrypted_message << endl;

    std::cout << std::endl;
    return 0;
}