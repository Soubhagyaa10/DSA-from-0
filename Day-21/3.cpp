//Find the longest consecutive sequence
#include <iostream>
using namespace std;
int main(){
    int arr[7] = {6, 4, 0, 1, 13, 2, 155};
    int count=0, current, longestSequence=0;
    for(int i=0; i<7; i++){
        current = arr[i];
        count=1;
        while(true){
            bool found=false;
            for(int j=0; j<7; j++){
                if(arr[j]==current+1){
                    found=true;
                    current++;
                    count++;
                    break;
                }
            }
            if(!found){
                break;
            }
        }
        if(count>longestSequence){
            longestSequence=count;
        }
    }
    cout<<"Longest consecutive sequence is: "<<longestSequence<<endl;
}