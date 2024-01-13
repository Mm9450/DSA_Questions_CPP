#include<iostream>
#include<algorithm>
using namespace std;
string removeDuplicates(string s){
    string ans=" ";
    for(int i=0; i<s.length();i++){
        int j=0;
        for(j=0; j<i; j++){
            if(s[i]==s[j]){
                break;
            }
        }
        if(i==j){
            ans +=s[i];
        }
    }
    return ans;
}
int main(){
    string str="cbacdcbc";
    cout<<"original string :  "<<str<<endl;
    cout<<"after removing duplicates:   "<<removeDuplicates(str)<<endl;



    return 0;
}
