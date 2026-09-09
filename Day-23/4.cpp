//FIND THE LONGEST INCREASING CONTIGUOUS SUBARRAY — BUT THIS TIME, RETURN THE STARTING INDEX
#include <iostream>
using namespace std;
int main(){
    int count=1,longest=0, temp;
    int arr[9] = {5, 6, 7, 2, 3, 4, 8, 1, 2};
    for(int i=0;i<9;i++){
        if(arr[i]==arr[i+1]){
            count++;
        }
        else{
            count=1;}
        if(count>longest){
            longest=count;
            temp=i;
        }
    }
    cout<<"Starting index ="<<temp<<endl<<"Length ="<<longest;
    return 0;
}