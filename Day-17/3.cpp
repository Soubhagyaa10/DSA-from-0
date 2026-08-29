#include<iostream>
using namespace std;
int main(){
    int arr1[3]={1,2,3};
    int arr2[5]{0,1,3,5,7};
    int i,j;
    int size1=3,size2=5;
    cout<<"UNION of given arrays is: "<<endl;
    if(size1>size2){
        for(i=0;i<size1;i++){
            for(j=0;j<size2;j++){
                if(arr1[i]!=arr2[j]){
                    cout<<arr1[i]<<" "<<arr2[j];}
                if(arr1[i]==arr2[j]){
                    cout<<arr1[i];
                }
            }
        }
    }
    else{
        for(i=0;i<size2;i++){
            for(j=0;j<size1;j++){
                if(arr1[i]!=arr2[j]){
                    cout<<arr1[i]<<" "<<arr2[j]<<" ";}
                
            }
        }
    }
}