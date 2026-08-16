#include<iostream>
using namespace std;
int main(){
    int a,b,lcm=1;
    cout<<"Enter 2 numbers: "<<endl;
    cin>>a>>b;
    if(a==1 && b==1){

    }
    else{
        for(int i=2; i<=(a*b); i++){
        if(i%a==0 && i%b==0){
            lcm=i;
            break;
        }
    }
}
    cout<<"The LCM of "<<a<<" and "<<b<<" is "<<lcm<<endl;
}