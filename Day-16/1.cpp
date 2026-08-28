#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4};
    int i,j;
    for(i=0;i<5;i++){
        for(j=i+1;j<5;j++){
            if(arr[i]==arr[j]){
                cout<<"Repeating element is: "<<arr[i];
                return 0;
            }
        }
    }
    cout<<"No repeating element";
}