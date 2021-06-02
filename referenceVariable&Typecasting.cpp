#include<iostream> 

using namespace std;

int c = 45;

int main(){
    
    // *************Build in Data types****************
    // int a, b, c;
    // cout<<"Enter the value of a:"<<endl;
    // cin>>a;
    // cout<<"Enter the value of b:"<<endl;
    // cin>>b;
    // c = a + b;
    // cout<<"The sum is "<<c<<endl;
    // cout<<"The global c is "<<::c;

    // ************* Float, double and long double Literals****************
    // float d=34.4F;
    // long double e = 34.4L; 
    // bool t = true;
    // cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;   //  It is byDefault double.
    // cout<<"The size of float 34.4f is "<<sizeof(34.4f)<<endl;  //float size =4
    // cout<<"The size of float 34.4F is "<<sizeof(34.4F)<<endl;  //4
    // cout<<"The size of long 34.4l is "<<sizeof(34.4l)<<endl;  //long size = 16
    // cout<<"The size of long 34.4L is "<<sizeof(34.4L)<<endl;  //16
    // cout<<"The size of int 34 is "<<sizeof(34)<<endl;  //int size=4
    // cout<<"The size of char is "<<sizeof('d')<<endl;  //char size=1
    // cout<<"The size of boolean is "<<sizeof(t)<<endl;  //boolean size =1
    // cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e;  

    // *************Reference Variables**************** 
    // Rohan Das----> Monty -----> Rohu ------> Dangerous Coder
    float x = 455;
    float & y = x;    //y refers to x. x and y have same memory location.
    cout<<x<<endl;
    cout<<y<<endl;

    // *************Typecasting**************** 
    int a = 45;   
    float b = 45.46;
    cout<<"The value of a is "<<(float)a<<endl;
    cout<<"The value of a is "<<float(a)<<endl;

    cout<<"The value of b is "<<(int)b<<endl;
    cout<<"The value of b is "<<int(b)<<endl;
    int c = int(b);

    cout<<"The expression is "<<a + b<<endl;
    cout<<"The expression is "<<a + int(b)<<endl;
    cout<<"The expression is "<<a + (int)b<<endl;


    return 0;
}
