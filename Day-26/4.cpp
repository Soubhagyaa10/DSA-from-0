//PAIR WITH THE MINIMUM DIFFERENCE
#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    int arr[6] = {8, 1, 5, 12, 3, 10};
    int i,j, num1,num2, target,pair=100;
    for(i=0;i<6;i++){
        for(j=i+1;j<6;j++){
            if(i!=j){
                target=abs(arr[i]-arr[j]);
            }
            if(target<pair){
                pair=target;
                num1=arr[i];
                num2=arr[j];
            }
        }
    }
    cout<<"The pair is "<<num1<< " and "<<num2;
    return 0;
}