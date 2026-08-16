#include<iostream>
using namespace std;
int main(){
    int num,e=0,o=0;
    cout<<"Enter a number: ";
    cin>>num;
    while(num>0){
        int rem=num%10;
        if(rem%2==0){
            e++;
        }
        else{
            o++;
        }
        num=num/10;
    }
    cout<<"Even digits: "<<e<<endl;
    cout<<"Odd digits: "<<o<<endl;
}