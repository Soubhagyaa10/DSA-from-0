#include<iostream>
using namespace std;
int main(){
    int arr[6]={8,2,1,6,3,7};
    int max1,max2,i;
    if(arr[0]>arr[1]){
        max1=arr[0];
        max2=arr[1];
    }
    else{
        max1=arr[1];
        max2=arr[0];
    }
    for(i=2;i<6;i++){
        if(arr[i]>max2 && arr[i]<max1){
            max2=arr[i];
        }
        else if(arr[i]>max1){
            max2=max1;
            max1=arr[i];
        }
    }

    cout<<"Second largest element is: "<<max2;
}