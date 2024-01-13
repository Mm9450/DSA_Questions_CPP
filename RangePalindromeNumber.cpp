#include<iostream>
using namespace std;
int main(){
    int min;
    cin>>min;
    int max;
    cin>>max;
    for(int i=min; i<=max; i++){
        int reverse =0;
        int temp = i;
        while(temp>0){
            reverse = reverse*10 + temp%10;
            temp= temp/10;
        }
        if(reverse ==i){
            cout<<i<<endl;
        }
    }

}