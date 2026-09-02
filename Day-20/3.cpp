//FIND THE INTERSECTION OF TWO ARRAYS
#include <iostream>
using namespace std;

int main() {
    int arr1[5]={1,2,3,4,5};
    int arr2[5]={3,4,5,6,7};
    int i,j;
    cout<<"Intersection of given arrays:"<<endl;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(arr1[i]==arr2[j]){
                cout<<arr1[i]<<" ";
            }
        }
    }
    return 0;
}