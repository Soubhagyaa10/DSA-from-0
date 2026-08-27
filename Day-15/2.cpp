#include<iostream>
using namespace std;
int main(){
    int arr[5]={3,4,5,7,8},actual=0,expected=0,i;
    for(i=0;i<5;i++){
        actual+=arr[i];
    }
    for(i=arr[0];i<=arr[4];i++){
        expected+=i;
    }
    cout<<expected<<endl;
    cout<<actual<<endl;
    if(expected-actual!=0){
        cout<<"Missing value: "<<expected- actual;
    }
    else
    cout<<"No missing value";
}