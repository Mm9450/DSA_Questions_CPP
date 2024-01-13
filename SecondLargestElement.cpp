#include<iostream>
using namespace std;
int SecondLargest(int arr[],int n){
    if(n<2)
    return -1;
    int large=INT_MIN ,Second_large=INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]>large){
            Second_large=large;
            large=arr[i];

        }
        else if(arr[i]>Second_large && arr[i]!=large){
            Second_large=arr[i];
        }
    }
    return Second_large;
}
int main(){
    int arr[5]={4,6,3,7,2};
    int ans = SecondLargest(arr,5);
    
    cout<<"Second largest value is"<<" "<<ans<<endl;
    
}