//FIND THE LONGEST SEQUENCE OF CONSECUTIVE ELEMENTS WHERE THE DIFFERENCE BETWEEN ADJACENT ELEMENTS IS EXACTLY 1
#include <iostream>
using namespace std;
int main(){
    int arr[5]={3,4,5,8,3};
    int longest=0,count=1,i;
    for (i=0;i<4;i++){
        if (arr[i+1]-arr[i]==1){
            count++;
        }
        else{
            count=1;
        }
        if(count>longest){
            longest=count;
        }   
    }
    cout<<"longest sequence of consecutive elements where the difference between adjacent elements is exactly 1= "<<longest;
    return 0;
}