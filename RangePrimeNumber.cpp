#include<iostream>
using namespace std;
int main(){
    int min;
    cin>>min;
    int max;
    cin>>max;
    for(int i = min; i<max; i++){
        int temp =i;
        int flag =0;
        for(int j=2; j<temp; j++){
            if(temp%j==0){
                flag=1;
                break;
            }
        }
        if(flag==0){
            cout<<temp<<endl;
        }
    }
}