//FIND THE LENGTH OF THE SMALLEST SUBARRAY WHOSE SUM IS GREATER THAN OR EQUAL TO K
#include <iostream>
using namespace std;
int main(){
    int arr[6] = {2, 3, 1, 2, 4, 3};
    int k = 7;
    int i,sum=0,length=0, truelength=6;
    for(i=0;i<6;i++){
        sum=arr[i];
        if(sum>=k){
            truelength=1;
                }
        for(int j=i+1;j<6;j++){
            sum+=arr[j];
            if(sum>=k){
                length=j-i+1;
                if(length<truelength){
                    truelength=length;
                }
            }
        }
       
    }
    cout<<"Length = "<<truelength;
    return 0;
}