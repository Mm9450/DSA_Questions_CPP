#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
void Capitalize(string str, int size){
    for(int i=0; i<size; i++){
        if(i ==0 || i ==(size-1)){
            str[i]= toupper(str[i]);
        }
        else if(str[i]== ' '){
            str[i-1]= toupper(str[i-1]);
            str[i+1]= toupper(str[i+1]);
        }
    }
    cout<<str<<endl;
}

int main() {
    string str = "take u forward is awesome";
    int size = str.length();

    Capitalize(str,size);

  
  return 0;
}
