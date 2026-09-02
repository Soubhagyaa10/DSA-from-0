//MOVE ALL NEGATIVE NUMBERS TO THE LEFT
#include <iostream>
using namespace std;

int main() {
    int arr[7]={1,-2,3,-4,5,-6,7};
    int copyarr[7]={};
    int i,left=0, right=6 ;
    for(i=0;i<7;i++){
        if(arr[i]<0){;
            copyarr[left]=arr[i];
            left++;
        }
        else{
            copyarr[right]=arr[i];
            right--;
        }
    }
    
    for(i=0;i<7;i++){
        cout<<copyarr[i]<<" ";
    }
    return 0;
}