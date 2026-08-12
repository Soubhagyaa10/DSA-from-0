#include<iostream>
using namespace std;
int main(){
    cout<<"Enter 1:Addition\nEnter 2:Subtraction\nEnter 3:Multiplication\nEnter 4:Division"<<endl;
    int choice,a,b;
    cin>>choice;
    cout<<"Enter two numbers: "<<endl;
    cin>>a>>b;
    switch(choice){
        case 1:
            cout<<"Addition: "<<a+b<<endl;
            break;
        case 2:
            cout<<a<<"-"<<b<<"="<<a-b<<endl;
            break;
        case 3:
            cout<<a<<"*"<<b<<"="<<a*b<<endl;
            break;
        case 4:
            if(b == 0)
                cout << "Division by zero is not allowed";
            else
                cout << a << "/" << b << "=" << a/b;
            break;
        default:
            cout<<"Invalid choice"<<endl;
    }
    return 0;
}