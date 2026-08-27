#include<iostream>
using namespace std;
int main(){
    int arr[10]={1,2,3,3,4,4,4,7,7,7};
    int i,j;
    for(i=0;i<10;i++){
        for(j=i+1;j<10;j++){
            if(arr[i]==arr[j]){
                cout<<"Duplicate is: "<<arr[i]<<endl;
                i++;
                break;
        }
    }
}  
}
