#include<iostream>
using namespace std;

int main(){
    int rows;
    cout<<"Enter number of rows: ";
    cin>> rows;
    // for(int i=0 ; i< 5 ;i++){
    //     for(int j =0 ; j<=i; j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    for(int i =1 , k = 0; i<=rows ; i++,k=0){
        // int k =0;
        for(int j = 1; j<=rows-i;j++){
            cout<<"  ";
        }
        while(k != 2*i -1){
            cout<<"* ";
            k++;
        }
        cout<<endl;
    }
}