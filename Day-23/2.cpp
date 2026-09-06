//FIND THE FIRST ELEMENT THAT IS GREATER THAN EVERY ELEMENT TO ITS LEFT
#include <iostream>
using namespace std;
int main(){
    int arr[7] = {4, 2, 7, 3, 9, 5, 10};
    int max=-1;
    bool found=false;
    for(int i=0;i<7;i++){
        for(int j=i-1;j>=0;j--){
            if(arr[j]>arr[i]){
                max=arr[j];
                found=true;
            }
            else{
                found=false;
            }
            if(found==true){  
                cout<<max;
                return 0;
            }
        }
    }
    return 0;
}