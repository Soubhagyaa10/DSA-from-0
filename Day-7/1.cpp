H
#include<iostream>
using namespace std;
int main()
{
    int num,min;
    cout<<"Enter a number: ";
    cin>>num;
    min=num%10;
    while(num>0){;
        if(num%10<min)
        {
            min=num%10;
        }        
        num=num/10;
    }
    cout<<"The smallest digit is: "<<min<<endl;
}
