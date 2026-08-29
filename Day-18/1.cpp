#include <iostream>
using namespace std;

int main() {
    int arr[7]={8,3,12,5,1,9,6};
    int min=arr[0], max=arr[0];
    for(int i=1; i<7; i++){
        if(arr[i]<min){
            min=arr[i];
        }
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"Largest= "<<max<<endl;
    cout<<"Smallest= "<<min;
    return 0;
}