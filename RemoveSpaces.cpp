#include<iostream>
using namespace std;
string removeSpaces(char str[]){
    int count =0;
    for(int i=0; str[i];i++)
    if(str[i]!=' '){
    str[count]=str[i];
    count++;
    }
    str[count]='\0';
    return str;
}
int main(){
    char str[]="How are you doing";
    cout<< removeSpaces(str);
    return 0;
}