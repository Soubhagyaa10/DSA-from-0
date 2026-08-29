#include <iostream>
using namespace std;

int main() {
    int arr[6]={1,5,7,-1,5,3};
    int target=6,pairs=0;
    for(int i=0;i<6;i++){
        for(int j=6;j>i;j--){
            if(arr[i]+arr[j]==target){
                pairs++;
            }
        }
    }
    cout<<"Number of pairs= " <<pairs<<endl;
    return 0;
}