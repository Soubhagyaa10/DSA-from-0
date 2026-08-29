#include<iostream>
using namespace std;
int main(){
    int arr[7]={1,2,3,4,6,8,10};
    int target=10;
    int left=0,right=6;

    while(left<right){
        if(arr[left]+arr[right]==target){
            cout<<arr[left]<<"+"<<arr[right]<<"="<<target;
            return 0;
        }
        else if(arr[left]+arr[right]<target){
            left++;
        }
        else{
            right--;
        }
    }
    cout<<"No such pair found";
    return 0;
}