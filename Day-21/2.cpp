//MAXIMUM SUBARRAY SUM
#include <iostream>
using namespace std;

int main() {
    int arr[8]={-2,1,-3,4,-1,2,1,-5};
    int currentSum=0;
    int maxSum=0;
    for(int i=0;i<8;i++){
        currentSum=0;
        for(int j=i;j<8;j++){
            currentSum+=arr[j];
            if(currentSum>maxSum){
            maxSum=currentSum;
        }
        }
        
    }
    cout<<"Maximum subarray sum =  "<<maxSum;
    return 0;
}