//MOVE ALL ZEROS TO THE END
#include <iostream>
using namespace std;
int main() {
    int arr[7]={0,1,0,3,12,0,5};
    int temp,j=0;
    for(int i=0;i<7;i++){
        if(arr[i]!=0){
            arr[j]=arr[i];
            j++;
        }
    }
    for(j=j;j<7;j++){
        arr[j]=0;
    }
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}