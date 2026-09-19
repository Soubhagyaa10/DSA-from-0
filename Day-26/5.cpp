//FIND A TRIPLET WITH A GIVEN SUM
#include <iostream>
using namespace std;
int main(){
    int arr[7] = {2, 4, 7, 1, 5, 3, 8};
    int k = 12;
    int a,b,c,sum=0;
    for(a=0;a<7;a++){
        for(b=a+1;b<7;b++){
            for(c=b+1;c<7;c++){
                sum=arr[a]+arr[b]+arr[c];
                if(sum==k){
                    cout<<"The triplet contains: "<<arr[a]<<" "<<arr[b]<<" "<<arr[c];
                    return 0;
                }
            }
        }
    }
    return 0;
}