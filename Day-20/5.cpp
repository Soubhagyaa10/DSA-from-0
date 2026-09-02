//FIND A PAIR WITH A GIVEN DIFFERENCE
#include <iostream>
using namespace std;

int main() {
    int arr[6]={1,5,3,4,2,7};
    int target=2, i, j;
    for(i=0;i<6;i++){
        for(j=i+1;j<6;j++){
            if(arr[i]-arr[j]==target || arr[j]-arr[i]==target ){
                cout<<"Pair found: "<<arr[i]<<" and "<<arr[j]<<endl;
            }
        }
    }
    return 0;
}