#include<iostream>
using namespace std;
int main(){
    char a ;
    cout<<"Enter";
    cin>>a;
    if(a=='0' || a=='1' || a=='2' || a=='3' || a=='4' || a=='5' || a=='6' || a=='7' || a=='8' || a=='9'){
        cout<<"Number";
    }
    else if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u'){
        cout<<"Vowels";
    }
    else{
        cout<<"Consonants";
    }
    return 0;
}
