//LONGEST SUBARRAY WITH A GIVEN SUM
#include <iostream>
using namespace std;
int main(){
    int arr[8]={2, 1, 3, 2, 4, 1, 1, 2};
    int k=6;
    int i,j,sum,temp, count=0;
    for (i=0;i<8;i++){
        sum=arr[i];
        temp=1;
        if(sum==k){
            if(temp>count){
                count=temp;}
            continue;}
        for(j=i+1;j<8;j++){
            sum=sum+arr[j];
            temp++;
            if(sum==k){
                if(temp>count){
                count=temp;}
                break;
            }}
    
    }
    cout<<"Length of the longest contiguous subarray whose sum equals "<<k<<" = "<<count;
    return 0;
}