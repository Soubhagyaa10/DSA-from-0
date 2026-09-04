//FIND THE FIRST NON-REPEATING ELEMENT
#include<iostream>
using namespace std;
int main(){
    int arr[7] = {4, 5, 1, 2, 1, 4, 5};
    int i,j,count;
    for(i=0;i<7;i++){
        count=1;
        for(j=i+1;j<7;j++){
            if(arr[i]==arr[j]){
                count++;
                break;
            }
        }
        if(count==1){
            cout<<"The first non-repeating element is "<<arr[i];
            return 0;
        }
    }
    return 0;
}
