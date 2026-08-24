#include <iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,3,5};
    cout<<"Enter a number to find the occurrences: "<<endl;
    int num,count=0;
    cin>>num;
    for(int i=0;i<5;i++){
        if(arr[i]==num){
            count++;
        }
        
    }
    if(count==0) 
        cout<<"Not found";
    else
        cout<<num<<" occurred "<<count<<" times";
}