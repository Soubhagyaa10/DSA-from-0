#include <iostream>
using namespace std;

int main() {
    int arr[5]={1,2,3,2,1};
    int left=0,right=4;
    bool ispalindrome=true;
    while(left<right){
        if(arr[left]==arr[right]){
            ispalindrome=true;
            left++;
            right--;
        }
        else
            ispalindrome=false;
            return 0;
    }
    if(ispalindrome==true)
        cout<<"Given array is palindrome.";
    else    
        cout<<"Given array is not palindrome";
    return 0;
}