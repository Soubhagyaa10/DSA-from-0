//FIND THE LONGEST INCREASING CONTIGUOUS SUBARRAY
#include <iostream>
using namespace std;
int main(){
    int arr[8]={1,2,3,2,4,5,6,1};
    int i,j,length,temp[8],longest[8],longestLength=0;

    for(i=0;i<8;i++){
        length=1;
        temp[0]=arr[i];

        for(j=i+1;j<8;j++){
            if(arr[j-1]<arr[j]){
                temp[length]=arr[j];
                length++;
            }
            else{
                break;
            }
        }

        if(length>longestLength){
            longestLength=length;

            for(int k=0;k<length;k++){
                longest[k]=temp[k];
            }
        }
    }

    cout<<"Longest subarray: ";
    for(i=0;i<longestLength;i++){
        cout<<longest[i]<<" ";
    }
    return 0;
}