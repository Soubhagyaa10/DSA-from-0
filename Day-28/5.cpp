U
//Find the equilibrium index
#include <iostream>
using namespace std;
int main(){
    int arr[7] = {1, 3, 5, 2, 2, 3, 1};
    int i,j,lsum=0,rsum=0;
    for (i=1;i<7;i++){
        lsum+=arr[i-1];
        rsum=0;
        for(j=7-1;j>i;j--){
            rsum+=arr[j];
        }
        if(lsum==rsum){
            cout<<"Equilibrium index="<<i;
        }
    }
    return 0;
}
