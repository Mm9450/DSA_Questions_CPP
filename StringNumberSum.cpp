#include<iostream>
using namespace std;
int main(){
    char str[100]="123xyz";
    int sum =0;
    for(int i= 0; str[i]!='\0';i++){
        if((str[i]>='0'&& str[i]<='9')){
            sum +=(str[i]-'0');
        }
    }
    cout<<"sum = "<<sum;
    return 0;
}