//FIND THE LONGEST SUBARRAY WITH SUM 0

#include <iostream>
using namespace std;

int main(){
    int arr[9]={1,2,-3,3,-1,2,-2,4,-4};
    int sum=0,i,j,temp=0,count=0;

    for(i=0;i<9;i++){
        temp=1;
        sum=arr[i];

        if(sum==0 && temp>count){
            count=temp;
        }

        for(j=i+1;j<9;j++){
            sum+=arr[j];
            temp++;

            if(temp>count && sum==0){
                count=temp;
            }
        }
    }

    cout<<"Longest subarray with sum 0 has length="<<count;
    return 0;
}
