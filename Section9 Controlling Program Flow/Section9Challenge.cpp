// Section 9 Controlling Program Flow
// Section Challenge

#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main(){
    
    bool quit{false};
    vector <int> numbers_input{};
    
    do{
        cout << "Menu Options" << endl;
        cout << "P - Print numbers" << endl;
        cout << "A - Add number to list" << endl;
        cout << "M - Display mean average of numbers" << endl;
        cout << "S - Display smallest number in list" << endl;
        cout << "L - Display largest number in list" << endl;
        cout << "C - Clear the list" << endl;
        cout << "Please enter your selection: ";
        char user_input{};
        cin >> user_input;
        
        // Use toupper() so all input is converted to upper case which means less checking to do
        user_input = toupper(user_input);
        
        // Code to output list
        if(user_input == 'P'){
            if(numbers_input.size() == 0){
                cout << "The list is empty!" << endl;
            }
            else{
                cout << "[ ";
                for(auto num : numbers_input){
                    cout << num;
                    cout << " ";
                }
                cout << "]" << endl;
            }
        }
            
        // Code to add to list
        // No need to check for vector size, we are adding elements
        else if(user_input == 'A'){
            cout << "Please enter an integer: ";
            int number_input;
            cin >> number_input;
            
            // Check for duplicate entry
            bool dupe_found{false};
            for(auto val : numbers_input){
                if(val == number_input){
                    dupe_found = true;
                }
            }
            
            if(dupe_found){
                cout << "That number is already in the list!" << endl;
            }
            else{
            numbers_input.push_back(number_input);
            cout << number_input << " added to list!" << endl;
            }
        }
            
        // Code to calculate mean average
        else if(user_input == 'M'){
            double mean_total{};
            double mean_running{};
            if(numbers_input.size() == 0){
                cout << "The list is empty!" << endl;
            }
            else{
                for(auto val : numbers_input)
                   mean_running += val; 
            }
            
            mean_total = mean_running / numbers_input.size();
            cout << "The mean average of the numbers in the list is: " << mean_total << endl;
        }
        
        // Code to output smallest number in list
        else if(user_input == 'S'){
            if(numbers_input.size() == 0){
                cout << "The list is empty!" << endl;
            }
            else{
                int smallest_number{numbers_input.at(0)};
                    for(auto val : numbers_input){
                        if(val < smallest_number){
                            smallest_number = val;
                        }
                    }
                 cout << "The smallest number in the list is: " << smallest_number << endl;   
            }
            
        }
        
        // Code to output largest number in list
        else if(user_input == 'L'){
            if(numbers_input.size() == 0){
                cout << "The list is empty!" << endl;
            }
            else{
                int largest_number{numbers_input.at(0)};
                    for(auto val : numbers_input){
                        if(val > largest_number){
                            largest_number = val;
                        }
                    }
                    cout << "The largest number in the list is: " << largest_number << endl;
                }
            
        }
        
        // Code to clear the list
        else if(user_input == 'C'){
            char clear_list_check{};
            cout << "Are you sure you want to clear the list(Y/N)?:";
            cin >> clear_list_check;
            clear_list_check = toupper(clear_list_check);
            if(clear_list_check == 'Y'){
                numbers_input.clear();
            }
        }
        
        else if(user_input == 'Q'){
            quit = true;
            cout << "Goodbye!" << endl;
        }
        else{
        cout << "Invalid choice, please try again" << endl;}
        
    } while(quit == false);
    
    std::cout << std::endl;
    return 0;
}