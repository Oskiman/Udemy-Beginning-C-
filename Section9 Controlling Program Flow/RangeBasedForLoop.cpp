// Section 9 Controlling Program Flow
// Range based for loop

#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main(){
    
//    int scores[]{10, 20, 30};
//    
//    for(auto score : scores){
//        cout << score << endl;
//    }

//    vector <double> temperatures{87.9, 77.9, 80.0, 72.5};
//    double running_total{0};
//    double average_temp{0};
//    
//    for(auto temp : temperatures){
//        running_total += temp;
//    }
//    
//    // Check to make sure no division by 0
//    if(temperatures.size() != 0){
//        average_temp = running_total / temperatures.size();
//    }
//    
//    
//    cout << "Average temperature: " << average_temp << endl;

//    for(auto val : {1, 2, 3, 4, 5}){
//        cout << val << endl;
//    }

//    for(auto c : "This is a test!"){
//        // Filter out spaces
//        if(c != ' ')
//            cout << c;
//    }

    for(auto c : "This is a test!"){
        // Filter out spaces
        if(c == ' ')
            cout << '\t';
        else
            cout << c;
    }
    
    
    std::cout << std::endl;
    return 0;
}