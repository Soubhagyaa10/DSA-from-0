//FIND THE LONGEST CONSECUTIVE SUBARRAY WITH EQUAL ADJACENT ELEMENTS
#include <iostream>
using namespace std;
int main(){
    int arr[10]={1,1,2,2,2,3,3,3,3,1};
    int i,temp=1,length=1;
    for (i=0;i<10-1;i++){
        if(arr[i+1]==arr[i]){
            temp++;
        }
        else{
            temp=1;
        }
        if(temp>length){
            length=temp;
        }
    }
    cout<<"Length of longest consecutive subarray with equal elements is "<<length;
    return 0;
}