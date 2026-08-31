//FIND THE MISSING NUMBER
#include <iostream>
using namespace std;

int main() {
    int arr[5]={1,2,4,5,6};
    int actual=0,expected=0;
    int i,n=6;
    for(i=0; i<5;i++){
        actual+=arr[i];
    }
    for(i=arr[0]; i<=n;i++){
        expected+=i;
    }
    if(expected-actual!=0){
        cout<<"Missing number is: "<<expected-actual;
    }
    return 0;
}