#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1, sum=0;
    while(i<n){
        if(n%i==0){
            sum = sum + i;
            i++;
        }
       
    }
     if(sum==n){
            cout<<"It is a perfect number"<<endl;
        }
        else{
            cout<<"it is not a perfect number"<<endl;
        }
}