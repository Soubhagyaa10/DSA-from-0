#include<iostream>
using namespace std;
int main(){
    int num,max,min;
    cout<<"Enter a number: ";
    cin>>num;
    max=num%10;
    min=num%10;
    while(num>0){
        if(num%10<min){
            min=num%10;
        }
        if(num%10>max){
            max=num%10;
        }
        num/=10;
    }
    cout<<max<<"-"<<min<<"="<<max-min<<endl;
}