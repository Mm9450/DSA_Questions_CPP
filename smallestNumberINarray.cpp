#include<iostream>
using namespace std;
int getMin(int arr[], int n){
    int min=INT_MAX;
    for(int i=0; i<n;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    return min;
}
int main(){
    int arr[5]={5,6,8,9,1};
    int ans = getMin(arr,5);
    cout<<"The smallest element is "<<" "<<ans<<endl;
}