//FIND THE LONGEST SEQUENCE OF EQUAL CONSECUTIVE ELEMENTS
#include <iostream>
using namespace std;
int main(){
    int count=1,longest=0;
    int arr[10] = {1, 1, 2, 2, 2, 3, 3, 1, 1, 1};
    for(int i=0;i<9;i++){
        if(arr[i]==arr[i+1]){
            count++;
        }
        else{
            count=1;}
        if(count>longest){
            longest=count;
        }
    }
    cout<<"Longest equal consecutive sequence= "<<longest;
    return 0;
}