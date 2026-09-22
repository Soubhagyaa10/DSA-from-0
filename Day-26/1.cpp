sggtg
//FIND THE LONGEST SUBARRAY WHOSE ELEMENTS ARE IN STRICTLY INCREASING ORDER.
#include <iostream>
using namespace std;
int main(){
    int arr[8]={1, 2, 3, 2, 4, 5, 6, 1};
        int longest=1,count=1,i;
        for(i=0;i<7;i++){
            if (arr[i+1]>arr[i]){
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
