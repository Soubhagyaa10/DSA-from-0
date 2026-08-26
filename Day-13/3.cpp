#include<iostream>
using namespace std;
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10}, even[10], odd[10];
    int i,j=0,k=0;
    for(i=0;i<10;i++){
        if(arr[i]%2==0){
            even[j]=arr[i];
            j++;
        }
        else{
            odd[k]=arr[i];
            k++;
        }
    }
    cout<<"Even elements: ";
    for(i=0;i<j;i++){
        cout<<even[i]<<" ";
    }
    cout<<endl<<"Odd elements: ";
    for(i=0;i<k;i++){
        cout<<odd[i]<<" ";
    }

}