#include<iostream>
using namespace std;

void printNto1(int n);

int main(){
    int n;
    cout<<"enter the value of N: ";
    cin>>n;
    printNto1(n);
    return 0;
}

void printNto1(int n){
    if(n==0){
        return;
    }
    cout<<n<<", ";
    printNto1(n-1);
}