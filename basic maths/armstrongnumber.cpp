#include<iostream>
using namespace std;

bool isarmstrongnum(int n);
int pow(int n,int x);

int main(){
    int n;
    cout<<"enter a number to check if its an armstrong number: ";
    cin>>n;
    cout<<"the given number is ";
    if(isarmstrongnum(n)){
        cout<<"an armstrong number.";
    }
    else{
        cout<<"not an armstrong number.";
    }
    return 0;
}

bool isarmstrongnum(int n){
    int tempn=n;
    int len=0;
    int ans=0;
    while(tempn!=0){
        len++;
        tempn/=10;
    }
    tempn =n;
    while(tempn!=0){
        ans+=pow(tempn%10,len);
        tempn/=10;
    }
    if(ans==n){
        return true;
    }
    return false;
}

int pow(int n,int x){
    int ans=1;
    for(int i=0;i<x;i++){
        ans*=n;
    }
    return ans;
}