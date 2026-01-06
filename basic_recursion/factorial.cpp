#include<iostream>
using namespace std;

int factorial(int n);

int main(){
    int n;
    cout<<"enter the value of N: ";
    cin>>n;
    cout<<n<<"! = "<<factorial(n);
    return 0;
}

int factorial(int n){
    if(n==1){
        return n;
    }
    return n*factorial(n-1);
}