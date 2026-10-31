f
//FIND THE LONGEST CONSECUTIVE INCREASING SUBARRAY
#include <iostream>
using namespace std;
int main(){
    int arr[9]={1,2,3,2,3,4,5,1,2};
    int i,j, length=1, temp=1; 
    for(i=0;i<9;i++){
        if(arr[i+1]>arr[i]){
            temp++;
        }
        else{
            temp=1;
        }
        if(temp>length){
            length=temp;
        }
    }
    cout<<""
    return 0;
}
