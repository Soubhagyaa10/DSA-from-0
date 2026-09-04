//Count subarrays with a given sum 'k'
#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 0, 1, 1};
    int k = 4;
    int i, j, sum = 0, count = 0;
    for(i=0;i<5;i++){
        sum=0;
        for(j=i;j<5;j++){
                sum+=arr[j];
                if(sum==k){
                    count++;
                }
            }
        }
    cout<<"Number of subarrays with given sum: "<<count<<endl;
    return 0;
}