#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int i, even=0, odd=0;
    for(i=0;i<5;i++){
        if(arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    cout<<"Even numbers="<<even<<endl;
    cout<<"Odd numbers="<<odd<<endl;

}