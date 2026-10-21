//FIRST NEGATIVE NUMBER IN EVERY WINDOW OF SIZE K
#include <iostream>
using namespace std;
int main(){
    int arr[8] = {12, -1, 7, 8, -15, 30, 16, 28};
    int k = 3, found=0;
    for(int i=0;i<8-k+1;i++){
        for(int j=i;j<i+k;j++){
            if(arr[j]<0){
                found=1;
                cout<<arr[j]<<" ";
                break;
            }
            else{
                found=0;
            }
        }
        if(found==0){
            cout<<0<<" ";
        }
    }
    return 0;
}