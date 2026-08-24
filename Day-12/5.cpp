#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,21,11,40,15};
    int i, min1,min2;
    if(arr[0]<arr[1]){
        min1=arr[0],min2=arr[1];
    }
    else{
        min1=arr[1],min2=arr[0];
    }
    for(i=2;i<5;i++){
    if(arr[i]<min1){
        min2=min1;
        min1=arr[i];
    }
    else if(arr[i]<min2 && arr[i]>min1){
        min2=arr[i];
    }
    }
    cout<<"Second smallest = "<<min2<<endl;
}