#include<iostream>
using namespace std;
int main(){
    int num=1,i,j,rows;
    cout<<"Enter number of rows: "<<endl;
    cin>>rows;
    for(i=1;i<=rows;i++){
        for(j=1;j<=i;j++){
            cout<<num;
            num++;
        }
        cout<<endl;
    }
}