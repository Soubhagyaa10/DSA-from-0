//FIND THE FIRST PAIR OF ELEMENTS WHOSE SUM IS EQUAL TO A TARGET
#include <iostream>
using namespace std;
int main(){
    int arr[7] = {4, 7, 1, 9, 3, 6, 2};
    int target = 10;
    for (int i=0;i<7;i++){
        for(int j=0; j<7;j++){
            if(i!=j){
                if(target-arr[i]==arr[j]){
                    cout<<arr[i]<<" + "<<arr[j]<<" = "<<target;
                    return 0;
                }
            }
    }}
    return 0;
}