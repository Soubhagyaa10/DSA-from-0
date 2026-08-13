#include<iostream>
using namespace std;
int main(){
  int num, digits=0;
  cout<<"Enter a number: "<<endl;
  cin>>num;
  if(num==0){
    cout<<"Number is 0"<<endl;
  }
  else{
    while(num>0){
        int temp=num%10;
        if(temp%2==0){
            digits++;
            num=num/10;
        }
        else{
            num=num/10;
        }
    }
  }
  cout<<"Number of even digits: "<<digits<<endl;
}
