/*LEADERS IN AN ARRAY
An element is called a leader if every element to its right is smaller than it.*/

#include <iostream>
using namespace std;
int main(){
    int arr[7] = {16, 17, 4, 3, 5, 2, 1};
    int i,j,size=7;
    bool check;
    cout<<"Leaders are ";
    for(i=0;i<size-1;i++){
        check=false;
        for(j=i+1;j<size;j++){
            if(arr[j]<arr[i]){
                check=true;
            }
            else{
                check=false;
                break;
            }
        }
        if(check==true){
            cout<<arr[i]<<endl;}
    }
    cout<<arr[size-1];
    return 0;
}