#include<iostream>
#include<algorithm>
using namespace  std;
void PrintFrequency(string str){
    sort(str.begin(),str.end());
    char ch = str[0];
    int count=1;
    for(int i=1; i<str.length(); i++){
        if(str[i]==ch)
        count++;
        else{
            cout<<ch<<count<<" ";
            ch = str[i];
        }
    }
    cout<<ch<<count<<" ";
}
int main(){
    string str= "articles";
    PrintFrequency(str);
    return 0;
}