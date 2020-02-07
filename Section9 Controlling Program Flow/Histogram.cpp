// Section 9 Controlling Program Flow
// Histogram

#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main(){
    
    // My attempt
    // Vector & Histogram
//    cout << "How many data items do you have?: ";
//    int data_items;
//    cin >> data_items;
//    
//    vector <int> user_data_items{};
//    
//    for(int i{0}; i < data_items; ++i){
//        cout << "Please enter a data item:";
//        int user_data_item;
//        cin >> user_data_item;
//        user_data_items.push_back(user_data_item);
//    }
//    
//    cout << endl;
//    cout << "You entered: ";
//
//    // Output using range based for loop
//    for(auto element : user_data_items){
//        cout << element << " ";
//    }
    
    
    // Code below is copied from tutorial video
    
    int num_items{};
    
    cout << "How many data items do you have?: ";
    cin >> num_items;
    
    vector<int> data{};
    
    for(int i{1}; i <= num_items; ++i){
        int data_item{};
        cout << "Enter data item " << i << ": ";
        cin >> data_item;
        data.push_back(data_item);
        
    }

    for(auto val : data){
        for(int i{1}; i <= val; ++i){
            if(i % 5 == 0){
                cout << "*";
            }
            else{
            cout << "-";
            }
        }
        cout << endl;
    }
    
    std::cout << std::endl;
    return 0;
}