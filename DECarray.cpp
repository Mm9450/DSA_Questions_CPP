#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int>arr={8,7,1,6,5,9};
    int n= arr.size();
    sort(arr.begin(),arr.end());
    for(int i=n-1; i>=0;i--){
        cout<<arr[i]<<" ";
    }

}
    