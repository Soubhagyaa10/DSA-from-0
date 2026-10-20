//COUNT SUBARRAYS WITH SUM GREATER THAN OR EQUAL TO K
#include <iostream>
using namespace std;
int main(){
    int arr[7] = {2, 3, 1, 2, 4, 3, 1};
    int k = 7;
    int i,j,count=0,sum=0;
    for(i=0;i<7;i++){
        sum=arr[i];
        if(sum>=k){
            count++;
        }
        for(j=i+1;j<7;j++){
            sum+=arr[j];
            if(sum>=k){
                count++;
            }
        }
    }
    cout<<"SUBARRAYS WITH SUM GREATER THAN OR EQUAL TO K ARE: "<<count;
    return 0;
}