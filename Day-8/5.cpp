#include<iostream>
using namespace std;
int main(){
    int row,i,j,k;
    cout<<"Enter number of rows: "<<endl;
    cin>>row;
    for(i=1;i<=row;i++){
        for(j=row-1;j>0;j--){
            cout<<" ";
        }
        for(k=1;k<(2*row);(k+2)){
            cout<<"*";
        }
        cout<<endl;
    }
}