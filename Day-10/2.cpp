#include<iostream>
using namespace std;
int main(){
    int i,j,k,rows;
    cout<<"Enter number of rows: "<<endl;
    cin>>rows;
    for(i=rows;i>0;i--){
        for(j=1;j<i;j++){
            cout<<" ";
        }
        for(k=1;k<=i;k++){
            cout<<"+";
        }
        cout<<endl;
}}
