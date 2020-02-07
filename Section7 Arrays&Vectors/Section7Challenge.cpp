// Section 7 Challenge

#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main(){
    
    vector <int> vec1;
    vector <int> vec2;
    
    vec1.push_back(10);
    vec1.push_back(20);
    
    cout << vec1.at(0) << endl;
    cout << vec1.at(1) << endl;
    cout << "vec1 is size " << vec1.size() << endl;
    
    vec2.push_back(100);
    vec2.push_back(200);
    cout << vec2.at(0) << endl;
    cout << vec2.at(1) << endl;
    cout << "vec2 is size " << vec2.size() << endl;
    
    vector <vector<int>> vec_2d;
    vec_2d.push_back(vec1);
    vec_2d.push_back(vec2);
    cout << vec_2d.at(0).at(0) << " " << vec_2d.at(0).at(1) << endl;
    cout << vec_2d.at(1).at(0) << " " << vec_2d.at(1).at(1) << endl;
    
    vec1.at(0) = 1000;
    cout << vec_2d.at(0).at(0) << " " << vec_2d.at(0).at(1) << endl;
    cout << vec_2d.at(1).at(0) << " " << vec_2d.at(1).at(1) << endl;
    cout << vec1.at(0) << " " << vec1.at(1) << endl;
    
    std::cout << std::endl;
    return 0;
}