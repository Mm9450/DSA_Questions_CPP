#include<iostream>
#include<algorithm>
using namespace std;
bool isPalindrome(string str){
    for(int i =0; i<str.length()/2; i++){
        if(str[i]!=str[str.length()-i-1]){
            return false;
        }
    }
    return true;
}
int main (){
    string str = "ABCDCB";
    bool ans = isPalindrome(str);
    
    if(ans == true){
        cout<<"it is palindromre"<<endl;
    }
    else{
        cout <<"not Palindrome"<<endl;
    }
}