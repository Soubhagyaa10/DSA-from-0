//FIND THE ELEMENT WITH THE MAXIMUM FREQUENCY
#include <iostream>
using namespace std;
int main(){
    int arr[10] = {2, 5, 2, 3, 5, 2, 4, 5, 5, 1};
    int occurence=0, final=0, elt; 
    for (int i=0;i<10;i++){
        occurence=0;
        for(int j=0;j<10;j++){
            if(i!=j){
                if(arr[i]==arr[j]){
                    occurence++;
                }
            }
        }
        
        if(occurence>final){
            final=occurence;
            elt=arr[i];
        }
    }
    cout<<"Element with maximum frequency is: "<<elt;
    return 0;
}