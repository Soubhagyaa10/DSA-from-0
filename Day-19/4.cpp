//FIND THE MAJORITY ELEMENT
#include <iostream>
using namespace std;

int main() {
    int arr[7]={1,1,1,1,3,5,2};
    int num=7;
    for(int i=0;i<num;i++){
        int count=0;
        for(int j=0;j<num;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>num/2){
            cout<<"Majority element is : "<<arr[i]<<endl;
            return 0;
        }
        }
    cout<<"No majority element found!"<<endl;
    return 0;
}