// Section 11 Functions
// Section Challenge
// Modularise Section 9 challenge to use functions

#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

// Function prototypes
void display_menu();
void menu_choice(char user_selection, vector <int> &numbers_input);
void output_list(const vector <int> &numbers_input);
void add_to_list(vector <int> &numbers_input);
void calculate_mean(const vector <int> &numbers_input);
void display_smallest(const vector <int> &numbers_input);
void display_largest(const vector <int> &numbers_input);
void clear_vector(vector <int> &numbers_input);
char get_user_input();

// To do
//bool check_for_dupe(vector <int> numbers_input, int number_input, bool quit);
//void sum_list(vector <int> numbers_input);
//void product_list(vector <int> numbers_input);

// Execution begins here
int main(){
    
    char user_selection{};
    vector <int> numbers_input{};
    
    do{
        
        display_menu();
        user_selection = get_user_input();
        menu_choice(user_selection, numbers_input);
        
    }while(user_selection != 'Q');
    
    std::cout << std::endl;
    return 0;
}
    
// Function definitions
void display_menu(){
    cout << "Menu Options" << endl;
    cout << "P - Print numbers" << endl;
    cout << "A - Add number to list" << endl;
    cout << "M - Display mean average of numbers" << endl;
    cout << "S - Display smallest number in list" << endl;
    cout << "L - Display largest number in list" << endl;
    cout << "C - Clear the list" << endl;
    cout << "Q - Quit" << endl;
    cout << "Please enter your selection: ";
    
}

// Will change this, move if/else to main to preserve const correctness & change to switch       
void menu_choice(char user_selection, vector <int> &numbers_input ){

    // If/else ladder for all choices
    if(user_selection == 'P'){
        output_list(numbers_input);
    }
    else if(user_selection == 'A'){
        add_to_list(numbers_input);
    }
    else if(user_selection == 'M'){
        calculate_mean(numbers_input);
    }
    else if(user_selection == 'S'){
        display_smallest(numbers_input);
    }
    else if(user_selection == 'L'){
        display_largest(numbers_input);
    }
    else if(user_selection == 'C'){
        clear_vector(numbers_input);
    }
    else if(user_selection == 'Q'){
    cout << "Goodbye!" << endl;
    }
    else{
        cout << "Invalid choice, please try again" << endl;
    }
    
}
        
void output_list(const vector <int> &numbers_input){
    if(numbers_input.size() == 0){
        cout << "The list is empty! []" << endl;
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

void add_to_list(vector <int> &numbers_input){
    int number_input;
    cout << "Please enter an integer: ";
    cin >> number_input;
    numbers_input.push_back(number_input);
    cout << number_input << " added to list!" << endl;
}

void calculate_mean(const vector <int> &numbers_input){
    if(numbers_input.size() == 0){
        cout << "The list is empty! []" << endl;
    }
    else{
    double mean_total{}, mean_running{};
    for(auto val : numbers_input){
        mean_running += val; 
    }
    mean_total = mean_running / numbers_input.size();
    cout << "The mean average of the numbers in the list is: " << mean_total << endl;
    }
}
        
void display_smallest(const vector <int> &numbers_input){
    if(numbers_input.size() == 0){
        cout << "The list is empty! []" << endl;
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
            
void display_largest(const vector <int> &numbers_input){
    if(numbers_input.size() == 0){
        cout << "The list is empty! []" << endl;
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
            
void clear_vector(vector <int> &numbers_input){
    char clear_list_check{};
    cout << "Are you sure you want to clear the list(Y/N)?:";
    cin >> clear_list_check;
    clear_list_check = toupper(clear_list_check);
    if(clear_list_check == 'Y'){
        numbers_input.clear();
    }
}

char get_user_input(){
    char user_input{};
    cout << "Please enter your selection: ";
    cin >> user_input;
    // Use toupper() so all input is converted to upper case which means less checking to do
    user_input = toupper(user_input);
    return user_input;
}
 
 

// to do   
//void sum_list(vector <int> numbers_input);
//void product_list(vector <int> numbers_input);
//bool check_for_dupe(vector <int> numbers_input, int number_input, bool quit);    