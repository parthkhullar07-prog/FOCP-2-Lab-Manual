#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter Year";
    cin>>a;
    if(a%400==0 || a%4==0 && a%100!=0){
        cout<<"Leap Year - 29 Days";
    }
    else{
        cout<<"Not A Leap Year - 28 Days";
    }
    return 0;
}
