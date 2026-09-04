//FIND THE EQUILIBRIUM INDEX
#include <iostream>
using namespace std;

int main() {
    int arr[5]={1,3,5,2,2}; 
    int left=0,right=4,i;
    int left_sum,right_sum;
    for(i=0;i<5;i++){
        left_sum = 0;
        for(int j=0;j<i;j++){
            left_sum += arr[j];
        }
        right_sum=0;
        for(int j=i+1;j<5;j++){
            right_sum += arr[j];
        }
        if(left_sum==right_sum){
            cout<<"Equilibrium index is: "<<i;
            return 0;
        }
    }
    cout<<"No equilibrium index found!";
    return 0;
}