// Section 12 Pointers & References
// This contains all sorts of code from the tutorial
// and will also contain experiments by myself

#include <iostream>
#include <vector>

using namespace std;    // Using this for brevity's sake

// Function declarations
//void swap1(int left, int right);
//void swap2(int *pleft, int *pright);
//void double_data(int *int_ptr);
//int *largest_int(int *int_ptr_1, int *int_ptr_2);
//int *create_array(size_t size, int init_value =0);

int main(){
    
// Address of operator
//    int num{10};
//    cout << "num is " << num << " address of num is &num at: " << &num << " size of num is: " << sizeof num << endl;

// Pointer values
//    int *p; // pointer to an int, points anywhere so will have a garbage value
//    cout << "value of p is: " << p << endl;
//    cout << "size of p is: " << sizeof p << endl;
//    cout << "address of p is: " << &p << endl;
//    p = nullptr;        // Set value of p to 0, effectively point to nowhere
//    cout << "after nullptr, value of p is now: " << p << endl;

// Pointer size & type
// Pointers all same size, can point to objects of different type & size
//    int *p1{nullptr};
//    double *p2{nullptr};
//    unsigned long long *p3{nullptr};
//    vector<string> *p4{nullptr};
//    string *p5{nullptr};

// Pointer type checking
// Compiler will ensure address in pointer is correct type
//    int score{10};
//    double high_temp{100.7};
//    
//    int *score_ptr{nullptr};
//    
//    score_ptr = &score;     // Ok score is an int, score_ptr a pointer to an int
//    score_ptr = &high_temp; // Compiler error, high_temp is a double

// Pointers are variables & can be changed
//    double high_temp{100.7};
//    double low_temp{37.2};
//    
//    double *temp_ptr{&high_temp};   // Points to high_temp
//    cout << "temp ptr points to: " << temp_ptr << " value is: " << *temp_ptr << " pointer address is: " << &temp_ptr << endl;
//    temp_ptr = &low_temp;           // Changed, now points to low temp
//    cout << "temp ptr now points to: " << temp_ptr << " value is: " << *temp_ptr << " pointer address is still: " << &temp_ptr << endl;
//    
//    int x{10};
//    int *px{nullptr};
//    cout << "\nValue of x: " << x << endl;
//    cout << "Value of px initialised to nullptr: " << px << endl;
//    
//    px = &x;       // Make px point to x
//    
//    cout << "Value of px now it points to x: " << px << endl;
//    
//    *px = 200;
//    
//    cout << "Value of x now changed through px: " << x << endl;
//    cout << "Value of px still the same (address of x): " << px << endl;
//    

    // Demonstrates the use of pointers to access data not in scope
//    int x = 1, y = 2;
//    cout << "\nx: " << x << " y: " << y << endl;
//    cout << "calling swap1()" << endl;
//    swap1(x, y);
//    cout << "x: " << x << " y: " << y << endl;
//    cout << "calling swap2()" << endl;
//    swap2(&x, &y);
//    cout << "x: " << x << " y: " << y << endl;
//    
    // Nothing in particular, just messing
//    int x{0};
//    int *px{nullptr};
//    px = &x;
//    
//    cout << "x: " << x << endl;
//    cout << "x + 1: " << x + 1 << endl;
//    cout << "&x: " << &x << endl;
//    cout << "&x + 1: " << &x + 1 << endl;
//    cout << "px: " << px << endl;
//    cout << "px + 1: " << px + 1 << endl;
//    cout << "*px: " << *px << endl;
//    cout << "*px + 1: " << *px + 1 << endl;
//    cout << "&px: " << &px << endl;
//    cout << "&px + 1: " << &px + 1 << endl;
//    *px = 100;
//    cout << "After *px = 100" << endl;
//    cout << "x: " << x << endl;
//    cout << "&x: " << &x << endl;
//    cout << "*px: " << *px << endl;
//    cout << "&px: " << &px << endl;

// Dereferencing pointers
    
//    int score{100};
//    int *score_ptr{&score};
//    
//    cout << "score: " << score << endl;
//    cout << "score_ptr: " << score_ptr << endl;
//    cout << "*score_ptr: " << *score_ptr << endl;
//    
//    *score_ptr = 200;
//    
//    cout << "After *score_ptr = 200, *score_ptr is now: " << *score_ptr << endl;
//    cout << "score has been changed indirectly via score_ptr: " << score << endl;
    
//    double high_temp{100.7};
//    double low_temp{37.2};
//    
//    double *temp_ptr{&high_temp};
//    
//    cout << "*temp_ptr points to high_temp: " << *temp_ptr << endl;
//    temp_ptr = &low_temp;
//    cout << "now *temp_ptr points to low_temp: " << *temp_ptr << endl;
//    
//    cout << "============================================================" << endl;
//    string name{"Frank"};
//    
//    string *string_ptr{&name};
//    cout << "*string_ptr is: " << *string_ptr << endl;
//    
//    name = "James";
//    
//    cout << "After changing name, *string_ptr is now: " << *string_ptr << endl;
    
//    cout << "=============================================================" << endl;
//    vector<string> stooges{"Larry", "Moe", "Curly"};
//    vector<string> *vector_ptr{nullptr};
//    
//    vector_ptr = &stooges;
//    
//    cout << "First stooge: " << (*vector_ptr).at(0) << endl;
//    cout << "Second stooge: " << (*vector_ptr).at(1) << endl;
//    cout << "Third stooge: " << (*vector_ptr).at(2) << endl;
//    
//    (*vector_ptr).at(0) = "Paul  ";
//    (*vector_ptr).at(1) = "is ";
//    (*vector_ptr).at(2) = "coding";
//    
//    cout << "First stooge is now: " << (*vector_ptr).at(0) << endl;
//    cout << "Second stooge is now: " << (*vector_ptr).at(1) << endl;
//    cout << "Third stooge is now: " << (*vector_ptr).at(2) << endl;

// Dynamic memory allocation
//    int *int_ptr{nullptr};
//    int_ptr = new int;      // Allocates a new int on the heap
//    
//    cout << "Address of new int: " << int_ptr << endl;    // Address of new int
//    cout << "Contents of address of new int (*int_ptr) will be garbage value: " << *int_ptr << endl;   // Contents at address of new int, will be garbage
//    
//    *int_ptr = 100;     // Assign a value to new int
//    
//    cout << "Address unchanged: " << int_ptr << endl;
//    cout << "Contents of new int now: " << *int_ptr << endl;
//    
//    delete int_ptr;
//    
//    // Allocate storage for an array on the heap
//    int *array_ptr{nullptr};
//    int size{};
//    
//    cout << "Array size?: ";
//    cin >> size;
//    
//    array_ptr = new int[size];          // Allocates memory of given size
//    
//    for(int i{0}; i < size; ++i){
//        array_ptr[i] = i;               // Populates array on the heap, begins at 0 to size-1
//    }
//    
//    for(int i{0}; i < size; ++i){       // Outputs array
//        cout << array_ptr[i] << " ";
//    }
//
//    
//    delete [] array_ptr;                   // Release memory, remember to use [] as we are deleting an array!

// Relationship between arrays & pointers
//    int scores []{100, 95, 89};
//    
//    cout << "scores: " << scores << endl;       // Address of first element in array
//    cout << "*scores: " << *scores << endl;     // Contents of address of first element in array
//    
//    int *score_ptr{scores};                     // Initialise pointer to point to scores[]
//    
//    cout << "score_ptr: " << score_ptr << endl; // Address of first element in array
//    cout << "*score_ptr: " << *score_ptr << endl;   // Contents of address of first element in array
//    
//    cout << "\nscores: " << scores << endl;
//    cout << "scores + 1: " << scores + 1 << endl;
//    cout << "scores + 2: " << scores + 2 << endl;
    
    // Array names can be dereferenced the same as pointers
    // after all, an array name is merely the address of the 
    // first element of an array
//    cout << "\n*scores: " << *scores << endl;
//    cout << "*(scores + 1): " << *(scores + 1) << endl;
//    cout << "*(scores + 2): " << *(scores + 2) << endl;
//    
//    cout << "\nscore_ptr[0]: " << score_ptr[0] << endl;
//    cout << "score_ptr[1]: " << score_ptr[1] << endl;
//    cout << "score_ptr[2]: " << score_ptr[2] << endl;
//    
//    cout << "\nscore_ptr: " << score_ptr << endl;
//    cout << "(score_ptr + 1): " << (score_ptr + 1) << endl;
//    cout << "(score_ptr + 2): " << (score_ptr + 2) << endl;
//    
//    cout << "\n*score_ptr: " << *score_ptr << endl;
//    cout << "*(score_ptr + 1): " << *(score_ptr + 1) << endl;
//    cout << "*(score_ptr + 2): " << *(score_ptr + 2) << endl;


// Pointer Arithmetic start
    // Increment pointer by size of(type)
    // int_ptr += 4 increments pointer by 4 integers
//    
//    int *array_ptr{nullptr};
//    int *array_ptr_2{nullptr};
//    int size{};
//    
//    cout << "Array size?: ";
//    cin >> size;
//    
//    array_ptr = new int[size];          // Allocates memory of given size
//    array_ptr_2 = new int;
//    
//    for(int i{0}; i < size; ++i){
//        array_ptr[i] = i;               // Populates array on the heap, begins at 0 to size-1
//    }
//    
//    cout << "Output array" << endl;
//    for(int i{0}; i < size; ++i){       // Outputs array
//        cout << array_ptr[i] << " ";
//    }
//    
//    cout << "\nArray addresses begin at array_ptr: " << array_ptr << endl;                 // Output address
//    cout << "Contents of first array address is *array_ptr: " << *array_ptr << endl;               // Output contents of address
//    
//    int n{0};
//    cout << "How many addresses to move?: ";
//    cin >> n;
//    
//    array_ptr_2 = array_ptr + n;     // Problem seems to begin here, why? Is array_ptr += n not a valid location?
//                                    // Silly me was array_ptr + n
//    
//    if(n < size){
//        cout << "Contents of address at *(array_ptr + n): " << *(array_ptr + n) << endl;  // Output contents of address at pointer + n
//        cout << "Address at (array_ptr + n): " << (array_ptr + n) << endl;                // Output address at pointer + n
//    }
//    else{
//        cout << "Number bigger than array size" << endl;
//    }
//    
    // Still not working, I'm obviously overlooking something (probably obvious too)
    // will leave for now
    // Doh! moment, It should be '+', I had been using '+=', now I get the correct result!

//    cout << "array_ptr_2: " << array_ptr_2 << endl;         // Output address of array_ptr_2, will be same as array+ptr + n
//    cout << "*array_ptr_2: " << *array_ptr_2 << endl;       // Output contents of array_ptr_2, will be same as contents of array_ptr + n
//    int diff{0};
//    diff = array_ptr_2 - array_ptr;                         // Calculate difference in number of elements between pointers
//    cout << "Difference between pointers is: " << diff << " elements" << endl;
//    
//    cout << boolalpha;
//    cout << "array_ptr == array_ptr_2: " << (array_ptr == array_ptr_2) << endl;
//    cout << "array_ptr + n == array_ptr_2: " << ((array_ptr + n) == array_ptr_2) << endl;
//    cout << "*array_ptr == *array_ptr_2: " << (*array_ptr == *array_ptr_2) << endl;
//    cout << "*array_ptr + n == *array_ptr_2: " << ((*array_ptr + n) == *array_ptr_2) << endl;
    
//    array_ptr_2++;
//    cout << "after array_ptr_2++ " << endl;
//    cout << "array_ptr_2 now points to: " << array_ptr_2 << endl;
//    cout << "array_ptr_2 now contains: " << *array_ptr_2 << endl;
//    
//    *array_ptr_2++;
//    cout << "after *array_ptr++ " << endl;
//    cout << "array_ptr_2 now points to: " << array_ptr_2 << endl;
//    cout << "array_ptr_2 now contains: " << *array_ptr_2 << endl;
//    
//    (*array_ptr_2)++;
//    cout << "after (*array_ptr_2)++ " << endl;
//    cout << "array_ptr_2 now points to: " << array_ptr_2 << endl;
//    cout << "array_ptr_2 now contains: " << *array_ptr_2 << endl;
//    
//    cout << "Output array" << endl;
//    for(int i{0}; i < size; ++i){       // Outputs array
//        cout << array_ptr[i] << " ";
//    }
//    
//    (*array_ptr_2)--;
//    cout << "\nafter (*array_ptr_2)-- " << endl;
//    cout << "array_ptr_2 now points to: " << array_ptr_2 << endl;
//    cout << "array_ptr_2 now contains: " << *array_ptr_2 << endl;
//    
//    *array_ptr_2--;
//    cout << "after *array_ptr-- " << endl;
//    cout << "array_ptr_2 now points to: " << array_ptr_2 << endl;
//    cout << "array_ptr_2 now contains: " << *array_ptr_2 << endl;
//    
//    array_ptr_2--;
//    cout << "after array_ptr_2-- " << endl;
//    cout << "array_ptr_2 now points to: " << array_ptr_2 << endl;
//    cout << "array_ptr_2 now contains: " << *array_ptr_2 << endl;
//    
//    cout << "Output array" << endl;
//    for(int i{0}; i < size; ++i){       // Outputs array
//        cout << array_ptr[i] << " ";
//    }

//    delete [] array_ptr;                   // Release memory, remember to use [] as we are deleting an array!
//    delete array_ptr_2;

// End of pointer arithmetic

// Comparing pointers
//    string s1{"Frank"};
//    string s2{"Frank"};
//    
//    string *p1{&s1};
//    string *p2{&s2};
//    string *p3{&s1};
//    
//    // Comparing pointers
//    cout << (p1 == p2) << endl;     // False
//    cout << (p1 == p3) << endl;     // True
//    
//    // Comparing data being pointed to
//    cout << (*p1 == *p2) << endl;   // True
//    cout << (*p1 == *p3) << endl;   // True
//  

// Const & pointers begins here

//    int high_score{100};
//    int low_score{65};
    
    // Pointers to constants
    // Data pointed to is constant - CANNOT be changed
    // Pointer CAN change and point elsewhere
//    const int *score_ptr{&high_score};
//    
//    cout << "score_ptr: " << score_ptr << endl;
//    cout << "*score_ptr: " << *score_ptr << endl;
//    
//    //*score_ptr = 86;    // Error - Assignment of read only location '*score_ptr'
//    score_ptr = &low_score;     // Ok
//    cout << "After score_ptr = &low_score" << endl;
//    cout << "score_ptr: " << score_ptr << endl;
//    cout << "*score_ptr: " << *score_ptr << endl;
    
    // Constant pointers
    // Data pointed to CAN be changed
    // Pointer CANNOT change to point elsewhere
    
//    int *const score_ptr{&high_score};
//    cout << "score_ptr: " << score_ptr << endl;
//    cout << "*score_ptr: " << *score_ptr << endl;
//    
//    *score_ptr = 86;    // Ok
//    //score_ptr = &low_score;     // Error pointer cannot change 
//    cout << "After *score_ptr = 86" << endl;
//    cout << "score_ptr: " << score_ptr << endl;
//    cout << "*score_ptr: " << *score_ptr << endl;

    // Constant pointers to constants
    // Data pointed to CANNOT be changed
    // Pointer CANNOT change to point elsewhere
    
//    const int *const score_ptr{&high_score};
//    cout << "score_ptr: " << score_ptr << endl;
//    cout << "*score_ptr: " << *score_ptr << endl;
//    
//    *score_ptr = 86;    // Error, data cannot be changed
//    score_ptr = &low_score;     // Error pointer cannot change 
//    cout << "After *score_ptr = 86" << endl;
//    cout << "After score_ptr = &low_score" << endl; 
//    cout << "score_ptr: " << score_ptr << endl;
//    cout << "*score_ptr: " << *score_ptr << endl;
    
// Const & pointers ends here

// Passing pointers to functions begins here

    // Pass by reference with pointers
//    int num{};
//    cout << "Please enter an integer, I will double it: ";
//    cin >> num;
//    cout << "\nYou entered " << num << endl;
//    int *int_ptr{nullptr};
//    int_ptr = &num;
//    // Function can be called one of 2 ways
//    //double_data(int_ptr);     // Use pointer address
//    double_data(&num);          // Use variable address
//    cout << "After calling double_data(int_ptr), or double_data(&num) num is now: " << num << endl;
// 
// Passing pointers to functions ends here   

// Returning a pointer from a function begins here

//    int *largest_ptr{nullptr};
//    int a{100};
//    int b{200};
//
//    // Below is how the function is called in the tutorial
//    largest_ptr = largest_int(&a, &b);
//    cout << *largest_ptr << endl;
    
    // Returning dynamically allocated memory
    // My attempt to call function
//    int *array_ptr{nullptr};
//    array_ptr = create_array(100, 100);
//    cout << array_ptr[5] << endl;       // Checking purposes

    // Tutorial call function
//    int *my_array;      // Will be allocated by the function, it is create_array() after all!
//    my_array = create_array(100, 20);
//    
//    
//    // Remember to delete, something I forgot to do with my call attempt
//    delete[] my_array;

// Returning a pointer from a function ends here  

// References begins here
//    vector<string> stooges{"Larry", "Moe", "Curly"};
//    
//    for(auto str : stooges){
//        str = "Funny";          // Will only change the copy
//    }
//    
//    for(auto str : stooges){
//        cout << str << " ";     // Larry Moe Curly
//    }
//    
//    cout << endl;
//    
//    // To change the actual vector elements we can use a reference
//    for(auto &str : stooges){
//        str = "Funny";
//    }
//    
//    for(auto const str : stooges){      // Const qualified, we only want to display the elements
//        cout << str << " ";     // Funny Funny Funny
//    }
//    
//    cout << endl;


// Create a reference to a pointer

    int num{100};
    cout << "num is: " << num << endl;
    int *int_ptr{nullptr};
    int_ptr = &num;
    cout << "int_ptr is: " << int_ptr << endl;
    cout << "*int_ptr is: " << *int_ptr << endl;
    
    // Assign a reference to a pointer
    //int ref_ptr{*int_ptr};        // ref_ptr is just a normal variable?
    //int ref_ptr{&int_ptr};        // invalid conversion from 'int**' to 'int'
    //int ref_ptr{&*int_ptr};       // invalid conversion from 'int*' to 'int'
    //int &ref_ptr{int_ptr};        // invalid conversion from 'int*' to 'int'
    int &ref_ptr{*int_ptr};         // Finally! Note I had the syntax wrong in previous attempts
    
    cout << "ref_ptr is: " << ref_ptr << endl;
    cout << "changing ref_ptr to 200..." << endl;
    cout << "=======================================" << endl;
    ref_ptr = 200;
    cout << "num is: " << num << endl;
    cout << "int_ptr is: " << int_ptr << endl;
    cout << "*int_ptr is: " << *int_ptr << endl;
    cout << "ref_ptr is: " << ref_ptr << endl;
    cout << "changing *int_ptr to 300...." << endl;
    cout << "=========================================" << endl;
    *int_ptr = 300;
    cout << "num is: " << num << endl;
    cout << "int_ptr is: " << int_ptr << endl;
    cout << "*int_ptr is: " << *int_ptr << endl;
    cout << "ref_ptr is: " << ref_ptr << endl;
    

// References ends here  
    std::cout << std::endl;
    return 0;
}


// Function definitions
// Swap function using pass by value (will remain unchanged)
//void swap1(int left, int right){
//int temp = left;
//left = right;
//right = temp;
//}
    
// Swap function using pointers (values will be changed)
//void swap2(int *pleft, int *pright){
//int temp = *pleft;
//*pleft = *pright;
//*pright = temp;
//}

// Function to illustrate passing by reference with pointer parameters
//void double_data(int *int_ptr){
//    *int_ptr *= 2;
//}

// Function to illustrate returning a pointer from a function
//int *largest_int(int *int_ptr_1, int *int_ptr_2){
//    if(*int_ptr_1 > *int_ptr_2)
//        return int_ptr_1;
//    else
//        return int_ptr_2;
//}

// Function to return dynamically allocated memory 
//int *create_array(size_t size, int init_value){
//    int *new_storage{nullptr};
//    
//    new_storage = new int[size];
//    for(size_t i{0}; i < size; ++i)
//        *(new_storage + i) = init_value;
//        
//    return new_storage;
//}