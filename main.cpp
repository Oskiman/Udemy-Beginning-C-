// Section 4 challenge
// 

#include <iostream>

int main(){
    
    int favourite_number{};
    std::cout << "Enter your favourite number between 1 - 100: ";
    std::cin >> favourite_number;
    std::cout << "Amazing, that's my favourite number too!" << std::endl;
    std::cout << "No really, " << favourite_number << " is my favourtite number" << std::endl;
    std::cout << std::endl;
    return 0;
}