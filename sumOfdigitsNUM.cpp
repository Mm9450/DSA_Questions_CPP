#include<iostream>
using namespace std;
int main(){
    int n=674;
    int d, sum=0;
    while(n!=0){
        d=n%10;
        sum+=d;
        n=n/10;
    }
    cout<<"sum of digit is  "<<sum<<endl;
}