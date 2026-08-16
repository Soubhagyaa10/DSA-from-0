#include<iostream>
using namespace std;
int main(){
    int num, newnum=0, digit;
    cout<<"Enter a number: ";
    cin>>num;
    while(num>0){
        digit=num%10;
        if(digit!=0)
            newnum=newnum*10+digit;
        num/=10;
    }
    int ans=0;
    while(newnum>0){
        ans=ans*10+newnum%10;
        newnum/=10;
    }
    cout<<"Number after removing zeros: "<<ans;
}