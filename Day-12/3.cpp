#include <iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    cout<<"Enter a number to find"<<endl;
    int num;
    cin>>num;
    for(int i=0;i<5;i++){
        if(arr[i]==num){
            cout<<"Element is found at: "<<i;
        }
    }
}