#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int>arr={8,7,1,6,5,9};
    int n=arr.size();
    sort(arr.begin(),arr.end());
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    
}