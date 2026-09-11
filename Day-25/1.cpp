//FIND THE LONGEST SUBARRAY WITH EQUAL NUMBERS OF 0S AND 1S
#include <iostream>
using namespace std;
int main(){
    int arr[6] = {0, 1, 0, 1, 1, 1};
    int zero=0,one=0, longest=0;
    for(int i=0;i<6;i++){
        zero=0,one=0;
        for(int j=i;j<6;j++){
            if(arr[j]==0)
                zero++;
            else if(arr[j]==1)
                one++;     
            if(zero==one && j-i+1>longest){
                longest = j-i+1;
            }       
        }
    }
    cout<<"Length of longest subarray with equal 0s and 1s is "<<longest;
    return 0;
}