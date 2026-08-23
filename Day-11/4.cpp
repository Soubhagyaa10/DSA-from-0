#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,21,11,40,15};
    int i, max=arr[0];
    for(i=0;i<5;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"Largest number = "<<max<<endl;
}