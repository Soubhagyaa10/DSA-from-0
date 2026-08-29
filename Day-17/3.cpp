#include<iostream>
using namespace std;
int main(){
    int arr1[3]={1,2,3};
    int arr2[5]{0,1,3,5,7};
    int i,j=0;
    int size1=3,size2=5;
    int arr3[size1+size2];

    for(i=0;i<size1;i++){
        arr3[i]=arr1[i];
    }
    for(i=size1;i<size1+size2;i++){
        arr3[i]=arr2[j];
        j++;
    }
    
    cout<<"UNION of given arrays is: "<<endl;
    for(i=0;i<size1+size2;i++){
        bool duplicate=false;

        for(j=0;j<i;j++){
            if(arr3[i]==arr3[j]){
                duplicate=true;
                break;
            }
        }
        if(duplicate==false){
            cout<<arr3[i]<<" ";
        }
        
    }
}
