#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int dummy = n;
    int reverse = 0;
    while(n>0){
        int digit = n%10;
        reverse = reverse*10 + digit;
        n=n/10;
    }
    if(dummy == reverse){
        cout<<"The number is palindrome number"<<endl;
    }
    else{
       cout<<"The number is not a palindrome number"<<endl;
    }
}