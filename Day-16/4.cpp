#include<iostream>
using namespace std;
int main(){
    int target=9;
    int arr[5]={1,4,6,7,3},i,j;
    for(i=0;i<5;i++){
        for(j=i+1;j<5;j++){
            if(arr[i]+arr[j]==target){
                cout<<arr[i]<<"+"<<arr[j]<<"="<<target;
                return 0;
            }
        }
    }
    cout<<"No such numbers found";
}