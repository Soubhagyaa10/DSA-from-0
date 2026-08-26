#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,3,2,4,5};
    int temp;
    temp=arr[1];
    arr[1]=arr[2];
    arr[2]=temp;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}