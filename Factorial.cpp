#include<iostream>
using namespace std;
int main(){
    int n=5, ans=1;
    for(int i=1; i<=n; i++){
        ans=ans*i;
    }
    cout<<"factorial of "<<n<<" is "<<ans<<endl;
}