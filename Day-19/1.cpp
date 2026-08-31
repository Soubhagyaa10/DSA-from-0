//FIND THE FIRST AND LAST OCCURRENCE
#include <iostream>
using namespace std;
int main() {
    int arr[8]={1,2,3,3,3,4,5,6};
    int target=3;
    
    for(int i=0;i<8;i++){
        if(arr[i]==target){
            cout<<"First occurence at index: "<<i<<endl;
            break;
        }
    }
    for(int i=7;i>=0;i--){
        if(arr[i]==target){
            cout<<"Last occurence at index: "<<i<<endl;
            break;
        }
    }
    return 0;
}