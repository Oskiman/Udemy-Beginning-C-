// Section 11 Functions
// Miscellaneous code chunks for practice

#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

// Practicing with function prototypes
//double calc_cost(double base_cost, double tax_rate);        // No default arguments supplied
//double calc_cost(double base_cost, double tax_rate = 0.06);     // Default argument supplied for tax_rate
double calc_cost(double base_cost, double tax_rate = 0.06, double shipping = 3.50);     // Multiple default arguments
void param_test(int formal);
void say_hello();
void say_hello_name(string name);
void say_world();

// Overloading function prototypes
int add_numbers(int a, int b);
double add_numbers(double a, double b);

// Passing arrays to functions prototypes
void print_array(const int numbers[], size_t size);
void print_array(string letters[]);
void zero_array(int numbers[], size_t size);

// Overloading functions prototypes
void display(int n);
void display(double d);
void display(string s);
void display(string s, string t);
void display(vector <string> v);

// Pass by reference functions
void scale_number(int &num);        // Pass by reference, function WILL be able to change actual

void swap(int &a, int &b);

void print_vector(const vector <int> &v);   // Vector is const quali

// Factorial functions prototype
unsigned long long factorial(unsigned long long n);
unsigned long long fibonacci(unsigned long long n);
void recurse(int count);
void printnum(int begin);
int main(){
    
//    say_hello();
//    cout << "Bye from main()" << endl;
//    
//    int result{};
//    result = add_numbers(100, 200);
//    cout << result << endl;
//    
//    
//    string name{};
//    cout << "Please enter your name: ";
//    cin >> name;
//    say_hello_name(name);       // name is a c++ object
//    say_hello_name("C Style String converted to a c++ object");     // c style string converted to a c++ object
//    
//    int actual{50};
//    cout << actual << endl;         // 50
//    param_test(actual);             // 50 passed in to param_test()    
//    cout << actual << endl;         // still 50 - actual parameter unchanged

// Default arguments    
//    double cost{0};
//    cost = calc_cost(100.0, 0.06);      // Both arguments supplied to function
//    cost = calc_cost(100.0);            // Only base cost passed to function, will use default argument supplied for tax_rate
//    cost = calc_cost(100.0, 0.08);      // Both arguments supplied, 0.08 will overwrite default of 0.06
//    cout << cost;

// Multiple default arguments
//double cost{0};
//cost = calc_cost(100.0, 0.08, 4.25);    // No default arguments used
//cout << cost << endl;
//cost = calc_cost(100.0, 0.08);          // Uses default shipping argument
//cout << cost << endl;
//cost = calc_cost(100.0);                // Uses default arguments for shipping & tax_rate
//cout << cost << endl;

// Overloading functions
//    cout << add_numbers(100, 200) << endl;      // Will call int version of add_numbers function
//    cout << add_numbers(100.5, 200.6) << endl;    // Will call double version of add_numbers function
//    cout << add_numbers(100, 12.3) << endl;     // Will cause an error, one int & one double passed to function

// Following code calls different versions of display() function
//    display(32);
//    display(32.3);
//    display("Hello");
//    display("Hello", " there");
//    
//    vector <string> v{"a", "b", "c"};
//    display(v);

//    int my_numbers[]{1,2,3,4,5};
//
//    print_array(my_numbers, 5);
//    zero_array(my_numbers, 5);
//    print_array(my_numbers, 5);

//    string my_letters[] = {"abcde"};
//    print_array(my_letters);
  
//    int number{};
//    cout << "Please enter an integer: ";
//    cin >> number;
//    cout << "number is: " << number << endl;
//    scale_number(number);
//    cout << "after pass by reference, number is now: " << number << endl;

//    int x{}, y{};
//    cout << "Please enter two integers: ";
//    cin >> x >> y;
//    cout << x << " " << y << endl;
//    cout << "Swapping x & y..." << endl;
//    swap(x , y);
//    cout << x << " " << y << endl;

//    vector <int> data{1,2,3,4,5};
//    print_vector(data);

//     // Factorial
//   cout << factorial(8) << endl;   // 40320
//    
//    // Fibonacci
//    cout << fibonacci(30) << endl;  // 832040

// Recursive count
//    recurse(1);     // gets to 64888 before stack overflow

    printnum(1);
    
    
    std::cout << std::endl;
    return 0;
}

//double calc_cost(double base_cost, double tax_rate){        // No default arguments
//    return base_cost += (base_cost * tax_rate);
//}

double calc_cost(double base_cost, double tax_rate, double shipping){
    return base_cost += (base_cost * tax_rate) + shipping;
}

double add_numbers(double a, double b){
    return a + b;
}
int add_numbers(int a, int b){
    return a + b;
}

void param_test(int formal){        // formal is a copy of actual
    cout << formal << endl;         // 50
    formal = 100;                   // only changes the local copy
    cout << formal << endl;         // 100
}

void say_hello(){
    cout << "Hello" << endl;
    say_world();
    cout << "Bye from say_hello()" << endl;
}

void say_hello_name(string name){
    cout << "Why, hello there " << name << endl;
}

void say_world(){
    cout << "World!" << endl;
    cout << "Bye from say_world()" << endl;
}

// Functions for overloading
void display(int n){
    cout << n << endl;
}

void display(double d){
    cout << d << endl;
}

void display(string s){
    cout << s << endl;
}

void display(string s, string t){
    cout << s << " " << t << endl;
}

void display(vector <string> v){
    for(auto c : v)
        cout << c << endl;
}

// Functions for passing arrays
void print_array(const int numbers[], size_t size){       // Const Array name & size passed to function
    for(size_t i{0}; i < size; ++i){
    cout << numbers[i] << " ";
    }
    // Attempt to change array elements results in a compiler error as function parameters
    // are declared as const, function cannot change anything
//    numbers[i] = 0;
    
    cout << endl;
}

// Overloaded print_array function that uses the sentinel value of a c style string
void print_array(string letters[]){
    size_t i{0};
    while (letters[i] != "\0"){
        cout << letters[i];
        ++i;
    }
    
    cout << endl;
}

// Function to zero all elements of an array, no point using const as we need access to change elements
void zero_array(int numbers[], size_t size){
    for(size_t i{0}; i < size; ++i){
        numbers[i] = 0;
    }
}

// Pass by reference functions
void scale_number(int &num){
    if(num > 100){
        num = 100;
    }
}

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void print_vector(const vector <int> &v){
    //v.at(0) = 1000;       // If vector is not const quali, function could possibly change elements of vector
    for(auto num : v){
        cout << num << " ";
    }
    
    cout << endl;
}

// Factorial functions definition
unsigned long long factorial(unsigned long long n){
    if(n == 0){
        return 1;
    }
    
    return n * factorial(n - 1);
}

unsigned long long fibonacci(unsigned long long n){
    if(n <= 1){
        return n;
    }
    
    return fibonacci(n - 1) + fibonacci(n - 2); 
}

void recurse(int count){
    cout << count << endl;
    recurse(count + 1);
}

void printnum(int begin){
    cout << begin;
    if(begin < 9){      // Base case
        printnum(begin + 1);
    }
    
    cout << begin;
}