#include<iostream>
using namespace std;
int main(){
    int num, digits=0;
    cout<<"Enter a number: "<<endl;
    cin>>num;
    if(num==0){
        cout<<"Number of  digits in "<<num<<" is: 1"<<endl;
    }
    else{
        while(num>0){
        num/=10;
        digits++;
    }
    cout<<"Number of digits in is: "<<digits<<endl;
    }
    
    return 0;
} 