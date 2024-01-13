#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;
void remDup(int arr[],int n){
    vector<int>v(arr,arr+n);
    vector<int>::iterator it;
    sort(v.begin(),v.end());
    it = unique(v.begin(),v.end());
     v.resize(distance(v.begin(),it));

     cout<<"\n after removing duplicates \n";

     for(it=v.begin();it!=v.end();++it)
     cout<<*it<<" ";
     cout<<'\n';

}
int main(){
    int arr[]={1,2,3,1,7,2,4,2};
    int n= sizeof(arr)/sizeof(arr[0]);
    cout<<"\n before removing duplicates \n";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";

    remDup(arr,n);

    return 0;
}



