#include<iostream>
using namespace std;
int main(){
    int a,b,hcf=1;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    if(a<=0 || b<=0)
        cout<<"HCF is not defined for zero";
    else if(a<b){
        for(int i=2;i<=a;i++){
            if(a%i==0 &&  b%i==0){
                hcf=i;
            }
        }
    }
    else{
        for(int i=2;i<=b;i++){
            if(a%i==0 &&  b%i==0){
                hcf=i;
            }
        }
    }
    cout<<"HCF of "<<a<<" and "<<b<<" is "<<hcf<<endl;
}
