#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int n=5;
    int sum=0, avg;
    for(int i=0; i<n; i++){
        sum+=arr[i];
        avg = sum / n;
    }
    cout<<"The average of array elements is "<<" "<<avg<<endl;
}
