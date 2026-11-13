//FIND THE LONGEST CONSECUTIVE DECREASING SUBARRAY
#include <iostream>
using namespace std;
int main(){
    int arr[10]={9,7,5,6,4,3,2,8,7,6};
    int i,temp=1,length=1;
    for (i=0;i<10-1;i++){
        if(arr[i+1]<arr[i]){
            temp++;
        }
        else{
            temp=1;
        }
        if(temp>length){
            length=temp;
        }
    }
    cout<<"Length of longest consecutive decreasing subarray is "<<length;
    return 0;
}