#include<iostream>
using namespace std;
int main(){
    int row,i,j;
    cout<<"Enter number of rows: "<<endl;
    cin>>row;
    for(i=0;i<row;i++){
        for(j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}