#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,4,3,2,1};
    int i=0,j=4;
    bool pal=true;
    while(i<j){
        if(arr[i]!=arr[j]){
            pal=false;
            break;
        }
        i++;
        j--;
    }
    if(pal==true){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not palindrome";
    }
}