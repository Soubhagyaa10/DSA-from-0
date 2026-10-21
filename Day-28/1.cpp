//MAXIMUM SUM OF A CONTIGUOUS SUBARRAY OF SIZE K
#include <iostream>
using namespace std;
int main(){
    int arr[8] = {2, 1, 5, 1, 3, 2, 4, 1};
    int k = 3;
    int sum=0,temp=0,i,j;
    for(i=0;i<8-k+1;i++){
        temp=0;
        for(j=i;j<i+k;j++){
            temp+=arr[j];
        }  
        if(temp>sum){
            sum=temp;
            }      
    }
    cout<<"Max sum of contiguous array of size k = "<<sum;
    return 0;
}