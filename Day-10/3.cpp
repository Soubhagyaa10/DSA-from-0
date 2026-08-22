#include<iostream>
using namespace std;
int main(){
    int i,j,k,rows;
    cout<<"Enter number of rows: "<<endl;
    cin>>rows;
    for(i=1;i<=rows;i++){
        for (j=i;j<=rows-1;j++){
            cout<<" ";            
        }
        for(k=1; k<=i;k++){
            cout<<k;
        }
        cout<<endl;}
}