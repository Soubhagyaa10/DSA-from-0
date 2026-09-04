//FIND THE SECOND LARGEST ELEMENT
#include <iostream>
using namespace std;

int main() {
    int arr[7] = {10, 5, 8, 20, 3, 15, 20};
    int max1=-1,max2=-1,i;
    for(i=0;i<7;i++){
        if(arr[i]>max1){
            max2=max1;
            max1=arr[i];
        }
        else if(arr[i]>max2 && arr[i]<max1){
            max2=arr[i];
        }
    }
    cout<<"The second largest element is: "<<max2;
    return 0;
}