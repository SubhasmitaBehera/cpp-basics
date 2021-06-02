#include<iostream>
using namespace std;

float moneyRecieved(int currentMoney, float factor = 1.04)   //default argument
{
    //Default arguments are those values which are used by the function if we don’t input our value.
    // It is recommended to write default arguments after the other arguments.
    return currentMoney + factor;
}
// int strlen(const char *p)  //constant argument
// {                          //As the argument is constant so its value won’t be modified.
//                       //Constant arguments are used when you don’t want your values to be changed or modified by the function.
// }

int main(){
    int money = 100000;
    cout<<"If you have "<<money<<" Rs in your bank account , you will recieve " <<moneyRecieved(money)<<" Rs after 1 year"<<endl;
    cout<<"For VIP: If you have "<<money<<" Rs in your bank account , you will recieve " <<moneyRecieved(money,1.1)<<" Rs after 1 year"<<endl;
    
    return 0;
}