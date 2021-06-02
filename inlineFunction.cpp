#include<iostream>
using namespace std;

// Inline functions are used to reduce the function call.
//  When one function is being called multiple times in the program it increases the execution time,
//   so inline function is used to reduce time and increase program efficiency.
//Inline functions are considered to be used when the function is small otherwise it will not perform well.

inline int product(int a , int b){
    // Not recommended to use below lines with inline functions
    // static int c=0; // This executes only once
    // c = c + 1; // Next time this function is run, the value of c will be retained
    return a*b;
}

int main (){
    int a , b;
    cout<<"Enter the value of a and b: "<<endl;
    cin>>a>>b;
    //the function will not run instead of it the function code will be copied at the place where the function is being called
    cout<<"The product of a and b is : "<<product(a,b)<<endl;
    cout<<"The product of a and b is : "<<product(a,b)<<endl;
    cout<<"The product of a and b is : "<<product(a,b)<<endl;
    cout<<"The product of a and b is : "<<product(a,b)<<endl;       
    cout<<"The product of a and b is : "<<product(a,b)<<endl;
    cout<<"The product of a and b is : "<<product(a,b)<<endl;
    cout<<"The product of a and b is : "<<product(a,b)<<endl;
    cout<<"The product of a and b is : "<<product(a,b)<<endl;
    cout<<"The product of a and b is : "<<product(a,b)<<endl;
    return 0;
}










// export JAVA_HOME=$(/usr/libexec/java_home)