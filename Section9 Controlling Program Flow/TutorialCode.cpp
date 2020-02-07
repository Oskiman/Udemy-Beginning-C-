// Section 9
// Various snippets of code from tutorial videos

#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main(){
    
    // Switch statement practice    
//    cout << "Please enter a number between 1 - 4 inclusive:";
//    int num{};
//    cin >> num;
//    
//    switch(num){
//        case 1:
//        cout << "1 selected" << endl;
//        break;
//        case 2:
//        cout << "2 selected" << endl;
//        break;
//        case 3:   // This acts the same as an OR statement
//        case 4:
//        cout << "3 or 4 selected" << endl;
//        break;
//        default:
//        cout << "1, 2, 3 or 4 not selected!" << endl;
//    }

    // Switch statement using enum
//    enum colour{red, green, blue};  // Initialise a 'variable' called colour & its three possible values
//    colour screen_colour{green};    // Initialise a variable of type colour called screen_colour
//    switch(screen_colour){
//        case red:
//        cout << "red" << endl;
//        break;
//        case green:
//        cout << "green" << endl;
//        break;
//        case blue:
//        cout << "blue" << endl;
//        break;
//    }

    // Conditional Operator
//    int a{10}, b{20};
//    int score{92};
//    int result{};
//    
//    result = (a > b) ? a : b;
//    cout << result << endl;
//    
//    result = (a < b) ? (b - a) : (a - b);
//    cout << result << endl;
//    
//    result = (b != 0) ? (a / b) : 0;
//    cout << result << endl;
//    
//    cout << ((score > 90) ? "Excellent" : "Good");


    // For loop practice
//    for(int i{1}; i <= 10; ++i){
//        if(i % 2 == 0)
//            cout << i << endl;
//    }
    
//    int scores []{100, 98, 97};
//    for(int i{0}; i < 3; ++i){
//        cout << scores[i] << endl;
//    }

//    for(int i{0}, j{5}; i <= 5; ++i, ++j){
//        cout << i << " * " << j << " = " << i * j << endl;
//    }
//  

// Range based for loop

//    int scores[]{100, 90, 97};
//    
//    for(int score : scores){
//        cout << score << endl;
//    }

//    vector <double> temps{87.2, 77.1, 80.0, 72.5};
//    
//    double mean_average{0.0};
//    double running_total{0.0};
//    
//    for(auto temp : temps){
//        running_total += temp;
//    }
//    
//    mean_average = running_total / temps.size();
//    
//    cout << "Mean average is: " << mean_average << endl;
    
    
    // Range based for loop using an initialisation list
//    double mean_average{0.0};
//    double running_total{0.0};
//    int count{0};
//    
//    for(auto temp : {60.2, 80.1, 90.0, 78.2}){
//        running_total += temp;
//        ++count;
//    }
//    
//    mean_average = running_total / count;
//    
//    cout << "Mean average is: " << mean_average << endl;

//    // Range based for loop & string
//    for(auto c : "Frank"){
//        cout << c << endl;
//    }

    // While loop
//    int i{1};
//    
//    while( i <= 5){
//        cout << i << endl;
//        ++i;
//    }

//    int i{1};
//    
//    while(i <= 20){
//        if(i % 2 == 0){
//            cout << i << endl;
//        }
//        ++i;
//    }

//    int scores[]{10, 20, 30};
//    int i{0};
//    
//    while(i < 3){
//        cout << scores[i] << endl;
//        ++i;
//    }
    
//    vector <int> scores{10, 20, 30};
//    size_t i{0};
//    
//    while(i < scores.size()){
//        cout << scores.at(i) << endl;
//        ++i;
//    }


//    int num_input{0};
//    cout << "Enter a number less than 100: ";
//    cin >> num_input;
//    
//    while(num_input >= 100){
//        cout << "Enter a number less than 100: ";
//        cin >> num_input;
//    }

//    int num_input{0};
//    cout << "Enter a number between 1 & 5: ";
//    cin >> num_input;
//    
//    while(num_input <= 1 || num_input >= 5){
//        cout << "Enter a number between 1 & 5: ";
//        cin >> num_input;
//    }

//    bool done{false};
//    int num{0};
//    
//    while(!done){
//        cout << "Enter a number between 1 & 5: ";
//        cin >> num;
//        if(num <= 1 || num >= 5){
//            cout << "Out of range, try again!" << endl;
//        }
//        else{
//            cout << "Thankyou" << endl;
//            done = true;
//        }
//    }

    // Do-While loop examples
//    int number{};
//    do{
//        cout << "Enter a number between 1 & 5:";
//        cin >> number;
//        
//    } while (number <= 1 || number >= 5);
//    
//    cout << "Thanks!" << endl;

//    char selection{};
//    
//    do{
//        double width{}, height{};
//        cout << "Enter width & height separated by a space: ";
//        cin >> width >> height;
//        
//        double area{width * height};
//        cout << "The area is: " << area << endl;
//        
//        cout << "Calculate another?: ";
//        cin >> selection;
//        
//    }while (selection =='y' || selection == 'Y');
//    
//    cout << "Thanks" << endl;

    // Continue & Break Statements
    // Code will skip any -1, stop at -99
//    vector <int> values{1, 2, -1, 3, -1, -99, 7, 9, 10};
//    
//    for(auto val : values){
//        if(val == -99){     // Check for possible break first
//            break;
//        }
//        else if(val == -1){ // Check for possible continue second
//            continue;
//        }
//        else{               // If no break or continue, output
//            cout << val << endl;
//        }
//    }

    // Infinite while loop with strategic break
//    while(true){        // Will always be true
//        char again{};
//        cout << "Do you want to loop again(Y/N): ";
//        cin >> again;
//        
//        if(again == 'n' || again == 'N'){
//            break;      // strategic break statement to get out of loop
//        }
//    }

    // Nested Loops
//    for(int outer_val{1}; outer_val <= 2; ++outer_val){
//        for(int inner_val{1}; inner_val <= 3; ++inner_val){
//            cout << outer_val << ", " << inner_val << endl;
//        }
//    }

    // 10 * 10 Multiplication Table
//    for(int num1{1}; num1 <= 10; ++num1){
//        for(int num2{1}; num2 <= 10; ++num2){
//            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
//        }
//    }

//    for(int outer_loop{1}; outer_loop <=5; ++outer_loop){
//        for(int middle_loop{1}; middle_loop <= 5; ++middle_loop){
//            for(int inner_loop{1}; inner_loop <= 5; ++ inner_loop){
//                cout << "Outer: " << outer_loop << "\tMiddle: " << middle_loop << "\tInner: " << inner_loop << endl;
//            }
//        }
//    }

//    // Using nested loops to populate an array with initial values
//    cout << "Please enter a value to initialise to:";
//    int input_value{0};
//    cin >> input_value;
//    
//    int array_grid[5][3];       // Create array 5 rows, 3 columns
//    for(int row{0}; row < 5; ++row){
//        for(int column{0}; column < 3; ++column){
//            array_grid[row][column] = input_value;
//        }
//    }
//    
//    // Output array 5 rows 3 columns
////    for(int row{0}; row < 5; ++row){
////        for(int column{0}; column < 3; ++column){
////            cout << array_grid[row][column] << "\t";
////            if(column == 2){
////                cout << endl;
////            }
////            }
////        }
//
//    // Code from tutorial to output array
//    // Cleaner than my version above
//    for(int row{0}; row < 5; ++row){
//        for(int column{0}; column < 3; ++column){
//            cout << array_grid[row][column] << " ";
//        }
//        
//        cout << endl;
//    }
//    // Using nested loops with 2d vectors
//    vector <vector <int>> vector_2d
//    {
//        {1, 2, 3},
//        {10, 20, 30, 40, 50},
//        {100, 200, 300, 400, 500}
//    };
//    
//    for(auto vec : vector_2d){   // For every vector in vector_2d
//        for(auto val : vec){        // For every value in current vector
//            cout << val << " ";
//        }
//        
//        cout << endl;       // Newline after each vector
//    }

    // Vector & Histogram
    cout << "How many data items do you have?: ";
    int data_items;
    cin >> data_items;
    
    vector <int> user_data_items{};
    
    for(int i{0}; i < data_items; ++i){
        cout << "Please enter a data item:";
        int user_data_item;
        cin >> user_data_item;
        user_data_items.push_back(user_data_item);
    }
    
    cout << endl;
    cout << "You entered: ";
//    for(size_t i{0}; i < user_data_items.size(); ++i){
//        cout << user_data_items.at(i) << " ";
//    }

    // Output using range based for loop
    for(auto element : user_data_items){
        cout << element << " ";
    }
    
    std::cout << std::endl;
    return 0;
}
