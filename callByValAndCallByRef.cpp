#include<iostream>
using namespace std;


//This will not swap a and b
void swap (int a , int b){
int temp = a;
a = b;
b= temp;
}

void swapPointers(int* a , int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}


//Call by reference usimg c++ reference variables
//int &
void swapReferenceVar(int &a , int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int x= 4, y = 5;
    swap (x,y);   //this will not swap x and y
    cout<<"Value of x: "<<x <<" and value of b : "<<y;
    swapPointers(&x , &y);   //This will swap x and y using pointer reference
    cout<<"\nValue of x: "<<x <<" and value of b : "<<y;
    swapReferenceVar(x,y);    //this will swap x and y using reference variables
    cout<<"\nValue of x: "<<x <<" and value of b : "<<y;
    
    return 0;
}