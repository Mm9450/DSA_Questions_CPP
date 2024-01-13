#include<iostream>
using namespace std;
int findnonrepeatingelement(int arr[], int n){
    for(int i=0;i<n;i++){
        int j;
        for(j=0;j<n;j++)
        if (i!=j && arr[i]==arr[j])

        break;
     if(j==n)
     return arr[i];        

        
    }
    return -1;
}


int main(){
    int arr[]={9,9,6,6,4};
    int n = sizeof(arr)/sizeof(arr[0]);
   cout<<findnonrepeatingelement( arr,n);

}
 
