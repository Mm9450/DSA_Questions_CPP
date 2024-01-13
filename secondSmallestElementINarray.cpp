#include<iostream>
using namespace std;
int SecondSmallest(int arr[],int n){
    if(n<2)
    return -1;
    int small=INT_MAX, second_small=INT_MAX;
    for(int i=0 ; i<n; i++){
        if(arr[i]<small){
            second_small=small;
            small=arr[i];
        }
        else if(arr[i]<second_small && arr[i]!=small){
            second_small=arr[i];
        }
    }
    return second_small ;
}
int main(){
    int arr[5]={4,5,6,7,8};
    int ans= SecondSmallest(arr,5);
    cout<<"the second smallest element is "<<" "<<ans<<endl;
}