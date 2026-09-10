//FIND THE FIRST ELEMENT THAT APPEARS TWICE
#include <iostream>
using namespace std;
int main(){
    int arr[8] = {4, 2, 7, 3, 1, 9, 7, 5};
    int count=0;
    for(int i=0;i<8;i++){
        count=0;
        for(int j=0;j<8;j++){
            if(i!=j){
                if(arr[i]==arr[j]){
                    count++;
                }}
            if(count==1){
                cout<<arr[i]<<" is the first element that appears more than once.";
                return 0;
            }
        }
    }
    cout<<"No element appears more than once";
    return 0;
}