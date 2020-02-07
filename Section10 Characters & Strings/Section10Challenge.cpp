// Section 10
// Section Challenge - Substitution Cipher
// Ask for a message input, encrypt it, output, decrypt & output original message

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
    
    cout << "Encrypting message..." << endl;
    
    string encrypted_message{};
    
    for(char c : message){
        size_t alphapos{0};
        if(!(isalpha(c)))
            encrypted_message += c;
        else{
            while(alphapos < alphabet.length() && c != alphabet.at(alphapos)){
                ++alphapos;
            }
            
            encrypted_message += key.at(alphapos);
        }
     }
    
    cout << encrypted_message << endl;
    
    string decrypted_message{};
    
    for (char c : encrypted_message){
        size_t keypos{0};
        if(!(isalpha(c)))
            decrypted_message += c;
        else{
            while(keypos < key.length() && c != key.at(keypos)){
                ++keypos;
            }
            
            decrypted_message += alphabet.at(keypos);
        }
    }
    
    cout << decrypted_message << endl;
    
    cout << endl;
    return 0;
}