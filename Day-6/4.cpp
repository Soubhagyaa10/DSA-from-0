#include<iostream>
using namespace std;
int main(){
    int num, sum=0;
    cout<<"Enter a number: "<<endl;
    cin>>num;
    int temp=num;
    while(temp>0){
        int a=temp%10;
        temp/=10;
        sum+=(a*a*a);
    }
    if(sum==num){
        cout<<num<<" is an Armstrong number. "<<endl;
    }
    else{
        cout<<num<<" is not an armstrong number.";
    }
}