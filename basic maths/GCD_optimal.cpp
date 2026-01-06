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
    if(n1==0 || n2==0){
        if(n1==0){
            return n2;
        }
        else{
            return n1;
        }
    }
    int ans;
    if(n1<n2){
        ans=GCD(n1,n2-n1);
    }
    else{
        ans=GCD(n1-n2,n2);
    }
    return ans;
}