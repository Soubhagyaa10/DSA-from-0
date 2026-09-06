//REARRANGE POSITIVE AND NEGATIVE NUMBERS IN ALTERNATE FASHION
#include <iostream>
using namespace std;
int main(){
    int arr[8] = {1, -2, 3, -4, 5, -6, 7, -8};
    int pos[4], neg[4];
    int i,j=0,k=0;
    for(i=0;i<8;i++){
        if(arr[i]<0){
            neg[j]=arr[i];
            j++;
        }
        else{
            pos[k]=arr[i];
            k++;
        }
    }
    
    j=0;
    for(i=0;i<8;i+=2){
        arr[i]=pos[j];
        j++;
    }
    j=0;
    for(i=1;i<8;i+=2){
        arr[i]=neg[j];
        j++;
    }
    cout<<"The array is: "<<endl;
    for(i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}