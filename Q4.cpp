#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter Item No.";
    cin>>a;
    cout<<"Enter Quantity";
    cin>>b;
    cout<<"Enter Unit Price";
    cin>>c;
    cout<<"The Amount Before Discount is "<<b*c<<endl;
    float aftdisc;
    aftdisc=(80.0/100.0)*b*c;
    cout<<"The Amount After Discount is "<<aftdisc;
    return 0;
}
