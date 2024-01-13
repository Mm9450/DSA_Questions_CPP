#include<iostream>
using namespace std;
int solve(string str, int length){
    int vowels=0, consonants=0,whitespaces=0;
    for(int i=0; i< length; i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        vowels++;
        else if(str[i]>='a'&& str[i<='z'])
        consonants++;
        else if(str[i]==' ')
        whitespaces++;


    }
    cout<<"vowels: "<<vowels<<endl;
    cout<<"consonants: "<<consonants<<endl;
    cout<<"whitespaces: "<<whitespaces<<endl;
    return 0;
}
int main(){
    string str = "india won the cricket match";
    int length = str.length();
    solve(str, length);
}