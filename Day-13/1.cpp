#include<iostream>
using namespace std;
int main(){
    int num,i, arr[5]={1,2,3,4,5};
    cout<<"Enter a number: ";
    cin>>num;
    for(i=0;i<5;i++){
        if (arr[i]==num){
            cout<<num<<" is found at: "<<i;
        break;}
    }
}