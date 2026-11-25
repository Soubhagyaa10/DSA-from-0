kbholhn
//FIND THE MAXIMUM PRODUCT SUBARRAY
#include <iostream>
using namespace std;

int main(){
    int arr[8]={2,3,-2,4,-1,0,5,2};
    int i,j,product,temp,count=0;
    int max=arr[0];

    for(i=0;i<8;i++){
        temp=1;
        product=arr[i];

        if(product>max){
            max=product;
            count=1;
        }

        for(j=i+1;j<8;j++){
            product*=arr[j];
            temp++;

            if(product>max){
                max=product;
                count=temp;
            }
        }
    }

    cout<<"Max product = "<<max<<"\n";
    cout<<"Subarray length = "<<count;

    return 0;
}
