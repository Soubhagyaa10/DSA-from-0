//ROTATE AN ARRAY BY K POSITIONS
#include <iostream>
using namespace std;

int main() {
    int arr[7]={1,2,3,4,5,6,7};
    int k=3, i=1, temp;
    while( i<=k){
        for(int l=6;l>0;l--){
            temp=arr[l];
            arr[l]=arr[l-1];
            arr[l-1]=temp;
        }
        i++;
    }
    for(i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}