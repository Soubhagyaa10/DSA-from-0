#include<iostream>
using namespace std;
int main(){
    int num, max1,max2;
    cout<<"Enter a number: ";
    cin>>num;
    max1=num%10;
    max2=-1;
    while(num>0){
        if(num%10>max1){
            max2=max1;
            max1=num%10;
        }
        else if(num%10>max2 && num%10!=max1){
            max2=num%10;
        }
        num/=10;
    }if(max2 == -1)
    cout << "There is no second largest distinct digit";
else
    cout << "Second largest digit: " << max2;}