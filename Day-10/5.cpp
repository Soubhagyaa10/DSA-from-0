#include<iostream>
using namespace std;
int main(){
    int i,j,k,rows;
    cout<<"Enter odd number: ";
    cin>>rows;
    for(i=1;i<=(rows/2)+1;i++){
        for(j=i;j<(rows/2)+1;j++){
            cout<<" ";
        }
        for(k=1;k<=2*i-1;k++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(i=rows/2;i>=1;i--){
        for(j=1;j<=rows/2-i+1;j++){
            cout<<" ";
        }
        for(k=1;k<=2*i-1;k++){
            cout<<"*";
        }
        cout<<endl;
    }
}
