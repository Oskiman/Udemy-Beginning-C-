// Section 7 Arrays &  Vectors
// Vectors

#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main(){
    
    // Vector initialisation
    vector <char> vowelsvec{'a', 'e', 'i', 'o', 'u'};
    vector <int> high_scores{100, 98, 89, 85, 93};
    vector <double> high_temps(365, 80.0);
    
    // Output vector elements using .at()
    cout << "Output vector elements using .at()" << endl;
    cout << vowelsvec.at(3) << endl;
    cout << high_scores.at(2) << endl;
    cout << high_temps.at(340) << endl;
    cout << endl;
    
    cout << "Element 0 of high_scores is " << high_scores.at(0) << endl;
    cout << "Element 1 of high_scores is " << high_scores.at(1) << endl;
    cout << "Element 2 of high_scores is " << high_scores.at(2) << endl;
    cout << "Element 3 of high_scores is " << high_scores.at(3) << endl;
    cout << "Element 4 of high_scores is " << high_scores.at(4) << endl;
    cout << endl;
    
    cout << "Please input new high scores (using .at() method)" << endl;
    cin >> high_scores.at(0);
    cin >> high_scores.at(1);
    cin >> high_scores.at(2);
    cin >> high_scores.at(3);
    cin >> high_scores.at(4);
    cout << endl;
    
    cout << "Element 0 of high_scores is now " << high_scores.at(0) << endl;
    cout << "Element 1 of high_scores is now " << high_scores.at(1) << endl;
    cout << "Element 2 of high_scores is now " << high_scores.at(2) << endl;
    cout << "Element 3 of high_scores is now " << high_scores.at(3) << endl;
    cout << "Element 4 of high_scores is now " << high_scores.at(4) << endl;
    cout << endl;
    
    cout << "Output vector elements using a loop & .at()" << endl;
    for(size_t i {0}; i < high_temps.size(); ++i)
        cout << high_temps.at(i) << " ";
    cout << endl;
    
    cout << "Using push_back() to grow a vector" << endl;
    vector <int> test_scores_vec{100, 98, 95};
    cout << "Original vector is size " << test_scores_vec.size() << endl;
    for(size_t i{0}; i < test_scores_vec.size(); ++i)
        cout << test_scores_vec.at(i) << " ";
    cout << endl;
    
    // Add new elements to vector
    test_scores_vec.push_back(88);
    test_scores_vec.push_back(87);
    
    cout << "Vector after new elements added is now size " << test_scores_vec.size() << endl;
    for(size_t i{0}; i < test_scores_vec.size(); ++i)
        cout << test_scores_vec.at(i) << " ";
    cout << endl;
    
    cout << "Enter another test score to add to the vector: ";
    int score_to_add{0};
    cin >> score_to_add;
    test_scores_vec.push_back(score_to_add);
    
    cout << "Enter another test score to add to the vector: ";
    cin >> score_to_add;
    test_scores_vec.push_back(score_to_add);
    
    cout << "Vector after new elements added is now size " << test_scores_vec.size() << endl;
    for(size_t i{0}; i < test_scores_vec.size(); ++i)
        cout << test_scores_vec.at(i) << " ";
    cout << endl;
    
    // 2d Vector
    cout << "Example of a 2d vector" << endl;
    vector <vector<int>> movie_ratings
    {
        {1, 2, 3, 4},
        {1, 2, 4, 4},
        {1, 3, 4, 5}
    };
    
    cout << "Here are the movie ratings for reviewer 1 using array syntax" << endl;
    cout << movie_ratings[0][0] << endl;
    cout << movie_ratings[0][1] << endl;
    cout << movie_ratings[0][2] << endl;
    cout << movie_ratings[0][3] << endl;
    
    cout << "Here are the movie ratings for reviewer 1 using vector syntax" << endl;
    cout << movie_ratings.at(0).at(0) << endl;
    cout << movie_ratings.at(0).at(1) << endl;
    cout << movie_ratings.at(0).at(2) << endl;
    cout << movie_ratings.at(0).at(3) << endl;
    
    cout << "Here are the movie ratings for reviewer 2 using vector syntax" << endl;
    cout << movie_ratings.at(1).at(0) << endl;
    cout << movie_ratings.at(1).at(1) << endl;
    cout << movie_ratings.at(1).at(2) << endl;
    cout << movie_ratings.at(1).at(3) << endl;
    
    cout << "Here are the movie ratings for reviewer 3 using vector syntax" << endl;
    cout << movie_ratings.at(2).at(0) << endl;
    cout << movie_ratings.at(2).at(1) << endl;
    cout << movie_ratings.at(2).at(2) << endl;
    cout << movie_ratings.at(2).at(3) << endl;
    
    std::cout << std::endl;
    return 0;
}