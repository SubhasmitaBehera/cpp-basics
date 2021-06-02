#include<iostream>
using namespace std;

//Function Prototype

//If the member function is defined after the main method() then the declaration of
//the function needed before the main method()
//and if the member function is defined before the main method() then the declaration is not needed.

//type function-name(arguments);
//int sum (int a , int b);  -->Acceptable
//int sum (int a , b); -->Not Acceptable
int sum (int , int); //-->Acceptable
// void g(void);   //-->Acceptable   
void g();   // -->Acceptable

int main(){
    int num1 , num2;
    cout<<"Enter first number: ";
    cin>>num1;
    
    cout<<"Enter second number: ";
    cin>>num2;
// num1 and num2 are actual parameters
    cout<<"The sum is "<<sum(num1,num2);
    g();
    return 0;
    
}

int sum(int a , int b){
    //Formal parameters a and b will be taking values from actual parameters num1 and num2
    int c = a+b;
    return c;
}

void g(){
    cout<<"\nHello , Good Morning";
}