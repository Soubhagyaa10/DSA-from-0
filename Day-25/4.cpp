//FIND THE LONGEST SUBARRAY WHERE ALL ELEMENTS ARE EQUAL.
#include <iostream>
using namespace std;
int main(){
    int arr[10] = {2, 2, 2, 5, 5, 3, 3, 3, 3, 1};
    int i, count=1, length=1;
    for(i=0;i<9;i++){
        if(arr[i]==arr[i+1]){
            count++;
        }
        else count=1;
        if(count>length){
            length=count;
        }
    }cout<<"Length of Longest subarray where all elements are equal = "<<length;
    return 0;
}