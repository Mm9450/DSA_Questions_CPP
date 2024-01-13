#include<iostream>
using namespace std;
int main(){
    int n = 786543;
    int d, rev=0;
    while(n!=0){
        d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
    cout<<"reverse of the number "<<rev<<endl;
}