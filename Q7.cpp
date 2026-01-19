#include<iostream>
using namespace std;
int main(){
    int a=5 , b=9;
    a=a^b;
    b=b^a;
    a=a^b;
    cout<<"First number after swap is "<<a<<endl;
    cout<<"Second number after swap is "<<b;
    return 0;
}