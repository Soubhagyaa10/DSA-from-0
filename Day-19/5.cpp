//Binary Search: count occurrences
#include <iostream>
using namespace std;

int main() {
    int arr[10]={1,2,2,2,3,4,4,5,6,7};
    int target=2, count=0;
    int beg=0,end=9;
    while(beg<=end){
    int mid=(beg+end)/2;

    if(target<arr[mid]){
        end=mid-1;
    }
    else if(target>arr[mid]){
        beg=mid+1;
    }
    else{
        int pos=mid;
        count=1;

        int left=pos-1;
        while(left>=0 && arr[left]==target){
            count++;
            left--;
        }

        int right=pos+1;
        while(right<10 && arr[right]==target){
            count++;
            right++;
        }

        cout<<target<<" occurs "<<count<<" times.";
        return 0;
    }
}
}