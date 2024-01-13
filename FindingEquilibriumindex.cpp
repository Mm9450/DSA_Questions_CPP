#include<iostream>
using namespace std;
int findequilibrium(int arr[],int n){
    int leftsum, rightsum;
    for(int i=0;i<n;i++){
        leftsum=0;
        for(int j=0; j<i;j++){
            leftsum+=arr[j];
        }
        rightsum=0;
        for(int j=i+1; j<n;j++){
            rightsum +=arr[j];
        }
        if(leftsum==rightsum){
            return i;
        }}
        return -1;
    }


int main(){
    int n=5;
    int arr[]={2,3,-1,8,4};
    int equilibriumidx = findequilibrium(arr,n);
    cout<<equilibriumidx<<endl;

}