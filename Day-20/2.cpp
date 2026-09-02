//CHECK IF TWO ARRAYS ARE EQUAL
#include <iostream>
using namespace std;

int main() {
    int arr1[5]={1,2,3,4,5};
    int arr2[5]={1,2,3,4,5};
    int i=0;
    for(i=0;i<5;i++){
        if(arr1[i]!=arr2[i]){
            cout<<"Not equal";
            return 0;
        }
    }
    cout<<"Equal Arrays";
    return 0;
}
