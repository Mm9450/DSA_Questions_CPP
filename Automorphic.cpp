#include<iostream>
using namespace std;
bool  Automorphic(int n){
    int sq = n*n;
    while(n>0){
        if(n%10 != sq%10)
        return false;
        n/=10;
        sq/=10;
    }
    return true;

}
int main(){
    int n = 25;
    if(Automorphic(n))
    cout<<"it is automorphic"<<endl;
    else
    cout<<"it is not automorphic"<<endl;
}