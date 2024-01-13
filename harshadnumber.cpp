#include<iostream>
using namespace std;
int main(){
    int n=379;
    int temp=n;
    int sum=0;
    while(temp!=0){
        sum+= temp%10;
        temp/= 10;
    }
    if(n%sum==0){
        cout<<"yes it is harshad number "<<endl;
    }
    else{
        cout<<"No harshad number"<<endl;
    }
}