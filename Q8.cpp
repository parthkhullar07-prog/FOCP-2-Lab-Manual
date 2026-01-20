#include<iostream>
using namespace std;
int main(){
    int N;
    int ID;
    cout<<"Enter Number of ID's";
    cin>>N;
    for(int i=1 ; i<=N ; i++){
        cout<<"Enter ID";
        cin>>ID;
        if(ID%3==0 && ID%5==0){
            cout<<"Buzz"<<endl<<"Fuzz"<<endl;
        }
        else if(ID%3==0){
            cout<<"Buzz"<<endl;
        }
        else if(ID%5==0){
            cout<<"Fuzz"<<endl;
        }
        else{
            cout<<"Error , not divisible by either 3 or 5"<<endl;
        }
    }
    return 0;
}