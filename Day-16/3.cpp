#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4};
    int temp=arr[0];
    int i;
    for(i=0;i<5;i++){
        arr[i]=arr[i+1];
    }
    arr[4]=temp;
    
}