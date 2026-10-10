jhyguj//LONGEST SUBARRAY WITH ALL DISTINCT ELEMENTS
#include <iostream>
using namespace std;
int main(){
    int arr[8] = {1, 2, 3, 1, 4, 5, 2, 6};
    int i,j,k,count=0,duplicate;
    for(i=0; i<8;i++){
        int temp=0;
        for(j=i;j<8;j++){
            for(k=i;k<j;k++){
                if(arr[k]==arr[j]){
                    duplicate = 0;
                    break;
                }
                else{
                    duplicate=1;
                }
            }    
            if(duplicate==1){
                temp++;
            }
        }
        if (temp>count){
            count=temp;
        }
    }
    cout<<"The longest subarray with distinct values has "<<count<<" elements.";
    return 0;
}
