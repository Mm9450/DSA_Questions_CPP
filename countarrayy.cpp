#include<iostream>
#include<vector>
using namespace std;
void countFreq(int arr[],int n){
    vector<bool>visited(n,false);
    for(int i=0;i<n;i++){
        if (visited[i]==true)
        continue;

        int count =1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                visited[j]=true;
                count++;

            }
        }
        cout<<arr[i]<<" "<<count<<endl;
    }
}



int main(){
    int arr[8]={2,2,3,3,4,5,6,6};
    countFreq(arr,8);

}
