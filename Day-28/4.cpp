//CHECK WHETHER ANY PAIR HAS A GIVEN SUM
#include <iostream>
using namespace std;
int main(){
    int arr[7] = {2, 7, 11, 4, 5, 8, 1};
    int target = 12;
    int i,j,sum=0;
    for(i=0;i<7-1;i++){
        sum=0;
        for(j=i+1;j<7;j++){
            sum=arr[i]+arr[j];
            if(sum==target){
                cout<<"Pair found";
                return 0;
            }
        }
    }
    cout<<"Pair not found";
    return 0;
}