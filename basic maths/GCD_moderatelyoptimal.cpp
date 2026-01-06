#include<iostream>
using namespace std;

int GCD(int n1,int n2);

int main(){
    int n1,n2;
    cout<<"enter the first number n1: ";
    cin>>n1;
    cout<<"enter the second number n2: ";
    cin>>n2;
    cout<<"the GCD of the given numbers is: "<<GCD(n1,n2);
    return 0;
}

int GCD(int n1,int n2){
    int ans;
    int min;
    if(n1<n2) min=n1;
    else min = n2;
    while(!(n1%min==0 && n2%min==0)){
        min--;
    }
    return min;
}