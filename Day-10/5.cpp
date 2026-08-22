#include<iostream>
using namespace std;
int main(){
    int i,j,k,rows;
    cout<<"Enter number";
    cin>>rows;
    for(i=1;i<=rows;i++){
        for(j=i;j<rows;j++){
            cout<<" ";
        }
        for(k=1;k<=i;k++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(i=1;i<rows;i++){
        for(j=1;j<i;j++){
            cout<<" ";
        }
        for(k=rows-1;k>=1;k--){
            cout<<"*";
        }
        cout<<endl;
    }
}