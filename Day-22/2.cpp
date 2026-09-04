/*BEST TIME TO BUY AND SELL STOCK
GIVEN AN ARRAY WHERE ARR[i] REPRESENTS THE PRICE OF A STOCK ON DAY i.

YOU CAN:
BUY ONCE
SELL ONCE
YOU MUST BUY BEFORE YOU SELL.
FIND THE MAXIMUM PROFIT YOU CAN MAKE.*/


#include <iostream>
using namespace std;
int main(){
    int arr[6] = {7, 1, 5, 3, 6, 4};
    int i,j,buy,sell,gain,profit=0;
    for(i=0;i<5;i++){
        buy=arr[i],sell=0;
        gain=sell-buy;
        for(j=i+1;j<6;j++){
            sell=arr[j];
            gain=sell-buy;
            if(gain>profit){
                profit=gain;
            }
        }
    }
    cout<<"Maximum profit= "<<profit;
    return 0;
}