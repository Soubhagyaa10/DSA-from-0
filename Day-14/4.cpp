#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,2,4,5};
    bool sorted=true;
    for(int i=0;i<4;i++){
            if (arr[i]>arr[i+1])
            {
                sorted=false;
                break;
            }
            
        }
        if(sorted==true)
        cout<<"Sorted";
        else
        cout<<"Not Sorted";
}