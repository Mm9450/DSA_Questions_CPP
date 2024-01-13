#include<iostream>
#include<algorithm>
using namespace std;
void getMedian(int arr[],int n){
    sort(arr,arr+n);
    if(n%2==0){
        int first=(n/2)-1;
        int second= n/2;
        cout<<(double)(arr[first]+arr[second])/2;
    }
    else{
        cout<<arr[(n/2)];
    }
}
int main(){
    int arr[]={4,7,1,2,5};
    int n=5;
    getMedian(arr,n);
    
}
