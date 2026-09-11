//FIND THE ELEMENT THAT APPEARS MORE THAN HALF THE TIME
#include <iostream>
using namespace std;
int main(){
    int arr[9] = {2, 2, 1, 2, 3, 2, 2, 4, 2};
    int size=9, count;
    for(int i=0;i<size;i++){
        count=1;
        for(int j=0;j<size;j++){
            if(i!=j){
                if(arr[i]==arr[j]){
                    count++;
                }
            }
        }
        if(count>(size/2)){
            cout<<"The element that appears more than half the time= "<<arr[i]<<endl;
            return 0;
        }
    }
    return 0;
}