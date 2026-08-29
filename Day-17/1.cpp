#include<iostream>
using namespace std;
int main(){
    int arr[5]={0,1,2,3,4};
    int temp=arr[4],i;
    for(i=4;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
    for(i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}