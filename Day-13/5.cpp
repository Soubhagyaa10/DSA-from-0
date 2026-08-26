#include <iostream>
using namespace std;
int main(){
    int arr[5]={1,2,0,3,0};
    int j=0;

for(int i=0;i<5;i++){
    if(arr[i]!=0){
        arr[j]=arr[i];
        j++;
    }
}

for( ; j<5; j++){
    arr[j]=0;
}
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}