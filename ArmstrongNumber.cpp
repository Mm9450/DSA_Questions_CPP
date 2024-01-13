#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count =0;
    int temp=n;
    while(temp!=0){
        count++;
        temp= temp/10;
    }
    int sumofpower=0;
    while(temp!=0){
        int digit=temp%10;
        sumofpower += pow(digit,count);
        temp=temp/10;
    }
    if(temp==sumofpower){
        cout<<"it is a armstrong number"<<endl;
    }
    else{
        cout<<"it is not a armstrong number"<<endl;
    }
}