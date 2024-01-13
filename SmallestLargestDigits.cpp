#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n=4726;
    int d, mini=INT_MAX,maxi=INT_MIN;
    while(n!=0){
        d=n%10;
        mini = min(mini,d);
        maxi = max(maxi,d);
        n=n/10;

    }
    cout<<"The minimum digit  "<<mini<<endl;
    cout<<"The maximum digit  "<<maxi<<endl;
}