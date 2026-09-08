//FIND THE FIRST ELEMENT THAT IS GREATER THAN EVERY ELEMENT TO ITS LEFT
#include <iostream>
using namespace std;
int main(){
    int arr[7]={4,2,3,7,1,5,10};
    bool found=false;
    for(int i=1;i<7;i++){
        found=false;
        for(int j=i-1;j>=0;j--){
            if(arr[j]<arr[i]){    
            }
            else{
                found=true;
                break;
            }
        }
        if(found==false){
            cout<<arr[i];
            return 0;
        }
    }
    return 0;
}