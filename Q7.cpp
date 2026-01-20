#include<iostream>
using namespace std;
int main(){
    int marks1,marks2,marks3;
    cout<<"Enter Marks1 :";
    cin>>marks1;
    cout<<"Enter Marks2 :";
    cin>>marks2;
    cout<<"Enter Marks3 :";
    cin>>marks3;
    if(marks1>marks2 && marks1>marks3){
        cout<<"Winner is 1 with marks "<<marks1;
    }
    else if(marks2>marks1 && marks2>marks3){
        cout<<"Winner is 2 with marks "<<marks2;
    }
    else{
        cout<<"Winner is 3 with marks "<<marks3;
    }
}
