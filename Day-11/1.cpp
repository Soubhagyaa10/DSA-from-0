#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter number of elements: ";
    cin>>num;
    int arr[num];
    cout<<"Enter  elements: ";
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    for(int j=0;j<num;j++){
        cout<<arr[j]<<endl;
    }

}