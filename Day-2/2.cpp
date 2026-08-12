#include<iostream>
using namespace std;
int main(){
    cout<<"Enter marks: "<<endl;
    int marks;
    cin>>marks;
    if(marks>=90 && marks<=100){
        cout<<"Grade A"<<endl;
    }
    else if(marks>=80){
        cout<<"Grade B"<<endl;
    }
    else if(marks>=70){
        cout<<"Grade C"<<endl;
    }
    else if(marks>=60){
        cout<<"Grade D"<<endl;
    }
    else if(marks>=0){
        cout<<"Grade F"<<endl;
    }
    else{
        cout<<"Invalid marks"<<endl;
    }
    return 0;
}