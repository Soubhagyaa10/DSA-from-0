#include<iostream>
using namespace std;
int main(){
    int arr[5]={3,4,4,7,3},count=1;
    int visited[5]={};
    for(int i=0;i<5;i++){
        if(visited[i]==1){
            continue;
        }
        else{
            visited[i]=1;

            for(int j=i+1;j<5;j++){
                if(arr[i]==arr[j]){
                    count++;
                    visited[j]=1;
                }
            }
        }
        cout<<arr[i]<<" occurred "<<count<<" times."<<endl;
        count=1;
    }
}