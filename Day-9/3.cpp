#include <iostream>
using namespace std;
int main(){
    int i,j,k,rows;
    cout<<"Enter number of rows: "<<endl;
    cin>>rows;
    for(i=1;i<=rows;i++){
        for(j=1;j<i;j++){
            cout<<j;
        }
        for(k=i;k>0;k--){
            cout<<k;
        }
        cout<<endl;}
    }