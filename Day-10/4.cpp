#include <iostream>
using namespace std;
int main(){
    int i,j,k,rows;
    cout<<"Enter number of rows:";
    cin>>rows;
    for(i=1;i<=rows;i++){
        for(j=i;j<rows;j++){
            cout<<" ";
        }
        if(i==1){
            cout<<"*";}
        else if(i==rows){
            for(k=1;k<2*rows;k++){
                cout<<"*";}}
        else{   
            cout<<"*";

        for(k=1;k<=2*i-3;k++){
            cout<<" ";}
        cout<<"*";}
        cout<<endl;
    }
}