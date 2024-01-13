#include<iostream>
using namespace std;
int factorial(int n){
    int fact=1;
    for(int i=1; i<=n; i++){
        fact = fact*i;

    }
    return fact;
}
int Strong_num(int num){
    int sum=0;
    while(num>0){
        int digit= num%10;
        sum = sum + factorial(digit);
        num = num/10;
    }
    return sum;

}
int main(){
    int number = 145;
    int answer = Strong_num(number);
    if(answer == number && number != 0){
        cout<<"yes it is strong number"<<endl;
    }
    else{
        cout<<"not strong number"<<endl;
    }
}