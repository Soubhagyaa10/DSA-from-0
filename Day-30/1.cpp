//FIND ALL LEADERS IN AN ARRAY
#include <iostream>
using namespace std;
int main(){
    int arr[8]={16,17,4,3,5,2,8,1};
    int arr1[]={}, a=0, isLeader=1;
    for(int i=0;i<8;i++){
        for(int j=i+1;j<8;j++){
            if(arr[i]<arr[j]){
               isLeader=0;
            }
        }
        if(isLeader==1){
            arr1[a]=arr[i];
            a++;}
        isLeader=1;
    }
    for(int b=0;b<a;b++){
        cout<<arr1[b]<<" ";
    }
    return 0;
}