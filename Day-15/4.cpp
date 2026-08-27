#include<iostream>
using namespace std;
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    int i,temp,size=7;
    for(i=0;i<size/2;i++){
        temp=arr[i];
        arr[i]=arr[size-1];
        arr[size-1]=temp;
        size--;
    }
    for(i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
}