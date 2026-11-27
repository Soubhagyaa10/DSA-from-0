//FIND THE ELEMENT THAT OCCURS MORE THAN \(N/2\) TIMES IN AN ARRAY.

#include <iostream>
using namespace std;
int main(){
    int arr[9]={2,2,1,2,3,2,2,4,2};
    int count=0,i,j,size=9;
    int visited[9]={0};
    bool isPresent=0;
    for(i=0;i<size;i++){
        if(visited[i]==1){
            continue;
        }
        count=1;
        visited[i]=1;
        for(j=i+1;j<size;j++){
            if(arr[j]==arr[i]){
                count++;
                visited[j]=1;
            }
        }
        if(count>size/2){
            cout<<"Majority element = "<<arr[i]<<"\n";
            isPresent=1;
            break;
        }
    }
    if(isPresent==0){
        cout<<"No majority element found";
    }
    return 0;
}
