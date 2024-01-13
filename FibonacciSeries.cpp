#include<iostream>
using namespace std;
int main(){
    int n=5;
    if(n==0){
        cout<<0;
    }
    else if (n==1) {
        cout<<0<<" "<<1<<endl;

    }
    else{
        int fib[100];
        fib[0]=0;
        fib[1]=1;
        for(int i=2;i<=n;i++){
            fib[i]=fib[i-1]+fib[i-2];
        }
        cout<<"Fibonacci series : "<<endl;
        for(int i=0; i<=n; i++){
            cout<<fib[i]<<" ";
        }
    }
}