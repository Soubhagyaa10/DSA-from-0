#include <iostream>
using namespace std;

int main() {
    int arr[5]={-1,-2,4,-5,-9};
    int i,left=0,right=4,temp;
    while(left<right){
        if(arr[left]<0){
            left++;
        }
        else if(arr[right]>=0){
            right--;
        }
        else{temp=arr[left];
            arr[left]=arr[right];
            arr[right]=temp;
            left++;
            right--;
            }
    }
    for(i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}