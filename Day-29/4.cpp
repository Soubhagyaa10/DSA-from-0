//FIND THE LONGEST SUBARRAY WITH ALTERNATING EVEN AND ODD ELEMENTS
#include <iostream>
using namespace std;
int main(){
    int arr[10]={2,5,8,7,4,3,6,9,12,5};
    int i,temp=1,length=1;
    for(i=0;i<10-1;i++){
        if(arr[i]%2!=arr[i+1]%2){
            temp++;
        }
        else{
            temp=1;
        }
        if(temp>length){
            length=temp;
        }
    }
    cout<<"Length of longest consecutive subarray with alternating odd and event elements is "<<length;

    return 0;
}