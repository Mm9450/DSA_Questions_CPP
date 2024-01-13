#include<iostream>
#include<math.h>
using namespace std;
float sumofGP(float a, float r, float n){
    float sum = a*(pow(r,n)-1)/(r-1);
    return sum;
}
int main(){
    float a =2;
    float r=2;
    float n=4;
    cout<<"the sum is  "<<sumofGP(a,r,n)<<endl;
}