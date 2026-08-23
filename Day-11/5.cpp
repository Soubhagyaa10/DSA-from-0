#include<iostream>
using namespace std;
int main(){
    int arr[5]={121,21,11,40,15};
    int i, min=arr[0];
    for(i=0;i<5;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"Smallest number = "<<min<<endl;
}