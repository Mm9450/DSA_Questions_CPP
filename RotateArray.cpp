#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int>arr={1,2,3,4,5,6,7};
    int n= arr.size();
    int k=3;
    vector<int>temp(n);
    for(int i=0;i<n;i++){
        temp[(i+k)%n]=arr[i];
    }
    arr = temp;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}
    