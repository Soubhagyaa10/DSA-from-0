//Find the maximum difference between two elements
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int arr[8]={7,1,5,3,6,4,9,2};
    int i,j, diff=0;
    for(i=0;i<8;i++){
        for(j=i+1;j<8;j++){
            if(arr[j]-arr[i]>diff || arr[i]-arr[j]>diff)
            diff=abs(arr[j]-arr[i]);
            }}
    cout<<"Max difference="<<diff;
    return 0;
}                                               