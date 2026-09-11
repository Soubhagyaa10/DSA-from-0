//FIND THE LONGEST SUBARRAY WHOSE SUM IS 0
#include <iostream>
using namespace std;
int main(){
    int arr[5] = {1, -1, 2, -2, 3};
    int sum=0,i,j,length=0, count=0;
    for(i=0;i<5;i++){
        count=0;
        sum=0;
        for(j=i;j<5;j++){
            sum+=arr[j];
            count++;
            if(sum==0){               
                if(count>length){
                    length=count;
                }
            }
        }
    }
    cout<<"Length of longest subarray with the sum 0 = "<<length;
    return 0;
}