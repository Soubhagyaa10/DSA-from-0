//FIND THE FREQUENCY OF EACH ELEMENT
#include<iostream>
using namespace std;
int main(){
    int arr[10]={2,3,2,5,3,2,7,5,8,3};    
    int count=1,visited[10]={0,0,0,0,0,0,0,0,0,0};
    for(int i=0;i<10;i++){
        if(visited[i]==1){
            continue;
        }
        else{
            visited[i]={1};
        }
        for(int j=i+1;j<10;j++){
            if(arr[i]==arr[j] && visited[j]==0){
                count++;
                visited[j]={1};
            }
        }
        cout<<arr[i]<<" occured "<<count<<" times.\n";
        count=1;
    }
    return 0;
}