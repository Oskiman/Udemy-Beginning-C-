// Section 9 Controlling Program Flow
// Do-While loop

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
    
    // this code was my version, I had a go without watching the video first
    // I wasn't far off
    char selection{};
    
    do{

        cout << "1. Do this" << endl;
        cout << "2. Do that" << endl;
        cout << "3. Do something else" << endl;
        cout << "Q. Quit" << endl;
        cout << "Please make a selection: ";
        cin >> selection;
        
        if(selection == '1'){
            cout << "Doing this" << endl;
        }
        else if(selection == '2'){
            cout << "Doing that" << endl;
        }
        else if(selection == '3'){
            cout << "Doing something else" << endl;
        }
        // Tutorial code for this part differed, see below
        // Duplication of code but more concise
//        else if(selection != 'q' && selection != 'Q'){
//            cout << "Unknown option, please try again!" << endl;
//        }

        else if(selection == 'q' || selection == 'Q'){
            cout << "Goodbye" << endl;
        }
        
        else{
            cout << "Unknown selection, please try again!" << endl;
        }
    } while(selection != 'q' && selection != 'Q');
    cout << "Thanks" << endl;
    
    std::cout << std::endl;
    return 0;
}