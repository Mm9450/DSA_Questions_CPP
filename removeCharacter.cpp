#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string solve(string str, int n){
    string ans;
    for(int i=0 ;i<n;i++){
        int ascii = (int)str[i];
        if((ascii>=65 && ascii<=90)||(ascii>=97 && ascii<=122))
        ans.push_back(str[i]);
    }
    return ans;
}
int main(){
    string str = "1.Python & 2.Java";
    int n = str.length();

    cout<<solve(str,n)<<endl;


    return 0;
}