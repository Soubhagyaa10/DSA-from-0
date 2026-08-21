#include<iostream>
using namespace std;
int main(){
    int row,i,j,k;
    cout<<"Enter number of rows: "<<endl;
    cin>>row;
    for(i=1;i<=row;i++){
        for(j=i;j<=row-1;j++){
            cout<<" ";
        }
        for(k=1;k<(2*i);k++){
            cout<<"*";
        }
        cout<<endl;
    }
}