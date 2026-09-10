//FIND THE FIRST ELEMENT THAT APPEARS EXACTLY ONCE
#include <iostream>
using namespace std;
int main(){
    int arr[8] = {4, 2, 7, 3, 1, 9, 7, 5};
    int count;
    for(int i=0;i<8;i++){
        count=1;
        for(int j=0;j<8;j++){
            if(i!=j){
                if(arr[i] == arr[j])
                    count++;}
        }
        if(count==1){                    
                    cout<<arr[i]<<" is the first element that appears just once.";
                    return 0;
        }
        
    }
    return 0;
}