// Section 9 Controlling Program Flow
// Switch statement

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
    
    char letter_grade{};
    
    cout << "Enter the grade you expect: ";
    cin >> letter_grade;
    
    switch(letter_grade){
        case 'a':
        case 'A':
        cout << "You need 90 or above" << endl;
        break;
        case 'b':
        case 'B':
        cout << "You need 80 - 89" << endl;
        break;
        case 'c':
        case 'C':
        cout << "You need 70 - 79" << endl;
        break;
        case 'd':
        case 'D':
        cout << "You need 60 - 69" << endl;
        break;
        case 'f':
        case 'F':
        {
            char confirm{};
            cout << "Are you sure you expect an F? (Y/N):";
            cin >> confirm;
            
            if(confirm == 'Y' || confirm == 'y'){
                cout << "You should have studied!" << endl;
            }
            else if(confirm == 'N' || confirm == 'n'){
                cout << "Good, get studying!" << endl;
            }
            else{
                cout << "Invalid input" << endl;
            }
            break;  
        }
        default:
        cout << "Invalid input" << endl;
    }
    std::cout << std::endl;
    return 0;
}