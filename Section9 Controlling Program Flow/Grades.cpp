// Section 9 Controlling Program Flow
// Nested If statements

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
    
    int score{0};
    char letter_grade{};
    
    cout << "Please enter your score: ";
    cin >> score;
    
    if(score >= 0 && score <= 100){
        if(score >= 90){
            letter_grade = 'A';
        }
        else if(score >= 80){
            letter_grade = 'B';
        }
        else if(score >= 70){
            letter_grade = 'C';
        }
        else if(score >= 60){
            letter_grade = 'D';
        }
        else
            letter_grade = 'F';
            
        cout << "Your grade is: " << letter_grade << endl;
        if(letter_grade == 'F'){
            cout << "You must repeat this class!" << endl;
        }
        else{
            cout << "Congratulations, you passed!" << endl;
        }
    }
    else{
        cout << "Sorry, input not in range!" << endl;
    }
    std::cout << std::endl;
    return 0;
}