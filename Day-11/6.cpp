#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,21,11,40,15};
    int i, max1, max2;
    if(arr[0]>arr[1]){
        max1=arr[0],max2=arr[1];
    }
    else{
        max1=arr[1],max2=arr[0];
    }
    for(i=0;i<5;i++){
        if(arr[i]>max2 && arr[i]<max1){
            max2=arr[i];
        }
        else if(arr[i]>max1){
            max2=max1;
            max1=arr[i];
        }
    }
    cout<<"Second Largest number = "<<max2<<endl;
}