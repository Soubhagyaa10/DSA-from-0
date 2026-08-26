#include<iostream>
using namespace std;
int main(){
    int i, arr[5]={1,0,0,-4,5};
    int pos=0,neg=0,zero=0;
    for(i=0;i<5;i++){
        if (arr[i]>0){
            pos++;
        }
        if(arr[i]<0)
            neg++;
        if(arr[i]==0)
        zero++;
    }
    cout<<"POSITIVE = "<<pos<<endl;
    cout<<"NEGATIVE = "<<neg<<endl;
    cout<<"ZERO = "<<zero<<endl;
}