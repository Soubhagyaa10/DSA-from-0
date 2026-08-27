#include<iostream>
using namespace std;
int main(){
    int arr[10]={1,2,3,3,4,4,4,7,7,7};
    int i,j=0;
    for(i=0;i<9;i++){
        if(arr[i]!=arr[i+1]){
            arr[j]=arr[i];
            j++;
        }
    }
    arr[j]=arr[9];
    j++;
    for(i=0;i<j;i++){
        cout<<arr[i]<<" ";
    }
}