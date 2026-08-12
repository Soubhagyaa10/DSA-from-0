#include <iostream>
using namespace std;

int main() {
    cout<<"Enter a number: "<<endl;
    int num;
    cin>>num;
    if(num>0){
        if(num%2==0){
            cout<<num<<" is positive and even"<<endl;
        }
        else{
            cout<<num<<" is positive and odd"<<endl;
        }
    }
    else if(num<0){
        if(num%2==0){
            cout<<num<<" is negative and even"<<endl;
        }
        else{
            cout<<num<<" is negative and odd"<<endl;
        }
    }
    else{
        cout<<num<<" is zero."<<endl;
    }
    return 0;
}