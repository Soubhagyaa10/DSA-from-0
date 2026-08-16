#include<iostream>
using namespace std;
int main(){
    int num, sum=0, fact=1;
    cout<<"Enter a number: "<<endl;
    cin>>num;
    int temp=num;
    while(temp>0){
        int a=temp%10;
        temp/=10;
        for(int i=a; i>0; i--){
            fact*=i;
        }
        sum+=fact;
        fact=1;
    }
    if(sum==num){
        cout<<num<<" is a Strong number. "<<endl;
    }
    else{
        cout<<num<<" is not a strong number."<<endl;
    }
}