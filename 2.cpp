//FIND THE LENGTH OF THE LONGEST SUBARRAY WITH ALTERNATING POSITIVE AND NEGATIVE NUMBERS.
#include <iostream>
using namespace std;
int main(){
    int arr[7] = {1, -2, 3, -4, 5, 6, -7};
    int i,count=1,length=1;
    for(i=0;i<6;i++){
        if((arr[i]>0 && arr[i+1]<0) || (arr[i]<0 && arr[i+1]>0)){
            count++;
        }
        else{
            count=1;
        }
        if(count>length){
            length=count;
        }
    }
    cout<<"Length = "<<length;
    return 0;
}