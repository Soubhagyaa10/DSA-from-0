#include<iostream>
using namespace std;
int main(){
    int num,i,sum=0;
    cout<<"Enter number of elements: ";
    cin>>num;
    int arr[num];
    cout<<"Enter  elements: ";
    for(i=0;i<num;i++){
        cin>>arr[i];
    }
    for(i=0;i<num;i++){
        cout<<arr[i]<<"  ";
    }
    for(i=0;i<num;i++){
        sum+=arr[i];
    }
    cout<<endl<<"Sum is "<<sum;
}