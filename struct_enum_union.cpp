#include<iostream>
using namespace std;
// The structure is a user-defined data type that is available in C++.
//  Structures are used to combine different types of data types, 
//  just like an array is used to combine the same type of data types. 

// struct employee {
//     private:
//     int eId;
//     char favChar;
//     public:
//     float salary;
// };

// Another way to create structure variables without using the keyword “struct” 
// and the name of the struct
//  we have used a keyword “typedef” before struct and after the closing bracket of structure, we have written “ep”. 
//  Now we can create structure variables without using the keyword “struct” and name of the struct.
typedef struct employee{
    int eId;
    char favChar;
    float salary;
}ep;    // ';' is neccessary.

// Unions are similar to structures but they provide better memory management then structures.  
// Unions use shared memory so only 1 variable can be used at a time.
union money{
    int rice;
    char car;
    float pounds;
};   // ';' is neccessary.

int main() {

    // Enums are user-defined types which consist of named constants. 
    // Enums are used to make the program more readable.
    enum Meal{breakfast, lunch, dinner};
    Meal m1 = lunch;
    cout<<(m1==2);
    cout<<breakfast;
    cout<<lunch;
    cout<<dinner;

    // union money m1;
    // m1.car = 'c';
    // m1.rice = 34;
    // m1.pounds= 34;
    // cout<<m1.car;
    // cout<<m1.rice;
    // cout<<m1.pounds<<endl;

    ep suman;
    // struct employee subhasmita;
    // subhasmita.salary =45;
    // cout<<subhasmita.salary;
    suman.eId = 1;
    suman.favChar= 'c';
    suman.salary = 120000000;
    cout<<"The value is "<<suman.eId<<endl;
    cout<<"The value is "<<suman.favChar<<endl;
    cout<<"The value is "<<suman.salary<<endl;
    
    return 0;
}