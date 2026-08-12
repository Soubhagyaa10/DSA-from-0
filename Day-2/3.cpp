#include<iostream>
using namespace std;
int main(){
    int a,b,c,mid;
    cout<<"Enter three numbers: "<<endl;
    cin>>a>>b>>c;
    mid=a;
    if((b>mid && b<c) || (b>c && b<mid)){
        mid=b;
    }
    else if((b<c && mid>c) || (mid<c && c<b)){
        mid=c;
    }
    cout<<"The middle value is: "<<mid<<endl;
    return 0;
}