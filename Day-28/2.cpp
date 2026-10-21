//COUNT SUBARRAYS OF SIZE K WITH SUM GREATER THAN K
#include <iostream>
using namespace std;
int main(){
    int arr[8] = {1, 4, 2, 7, 3, 5, 1, 6};
    int k = 3;
    int i,j,count=0,sum=0;
    for(i=0;i<8-k+1;i++){
        sum=0;
        for(j=i;j<i+k;j++){
            sum+=arr[j];
        }
        if(sum>k){
            count++;
        }
    }
    cout<<"LENGTH OF SUBARRAYS OF SIZE K WITH SUM GREATER THAN K= "<<count;
    return 0;
}