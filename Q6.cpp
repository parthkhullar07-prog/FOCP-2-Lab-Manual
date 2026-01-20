#include<iostream>
using namespace std;
int main(){
    float a;
    float b,c;
    cout<<"Enter Total Employees";
    cin>>a;
    cout<<"Enter Basic Salary";
    cin>>b;
    c=b+b*(12.0/100.0);
    cout<<"Bonus "<<b*(12.0/100.0)<<endl;
    cout<<"Basic Salary After Bonus "<<c<<endl;
    cout<<"Net Salary "<<c*a;
    return 0;
}
