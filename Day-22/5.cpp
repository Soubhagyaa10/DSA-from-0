//CHECK IF AN ARRAY IS SORTED AND ROTATED

#include <iostream>
using namespace std;

int main(){
    int arr[6] = { 1, 2, 2, 3, 4, 5};
    int i,count=0;

    for(i=0;i<5;i++){
        if(arr[i]>arr[i+1]){
            count++;
        }
    }

    if(arr[5]>arr[0]){
        count++;
    }
    if(count==1){
        cout<<"Array is sorted and rotated"<<endl;
    }
    else{
        cout<<"Not sorted."<<endl;
    }

    return 0;
}