#include<iostream>
#include<algorithm>
using namespace std;
void findRepeatingElement(int arr[], int n){
    int count=0;
    int dup[100];
    for(int i=0; i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j])
            dup[count++]=arr[i];

        }
    }
    cout<<"The Repeating elements are: \n";
    for(int i=0; i<count; i++){
        if(dup[i]!=dup[i+1])
        cout<<dup[i]<<" ";
    }

}
int main(){
    int arr[]={1,1,2,3,4,4,5,2};
    findRepeatingElement(arr,8);
}