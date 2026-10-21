//LONGEST SUBARRAY WITH SUM LESS THAN OR EQUAL TO K
#include <iostream>
using namespace std;
int main(){
    int arr[7] = {2, 1, 3, 2, 1, 1, 2};
    int k = 5;
    int i,j,count=0,temp=0,sum=0;
    for(i=0;i<7;i++){
        temp=0;
        sum=arr[i];
        temp++;
        if(sum<=k && count<temp){
                count=temp;
            }
        for(j=i+1;j<7;j++){
            sum+=arr[j];
            temp++;
            if(sum<=k && count<temp){
                count=temp;
            }
        }
    }
    cout<<"LENGTH OF LONGEST SUBARRAY WITH SUM LESS THAN OR EQUAL TO K IS: "<<count;
    return 0;
}