#include<iostream>
using namespace std;

void print1toN(int n);

int main(){
    int n;
    cout<<"enter the upper bound number: ";
    cin>>n;
    print1toN(n);
    return 0;
}

void print1toN(int n){
    if(n==0){
        return;
    }
    print1toN(n-1);
    cout<<n<<", ";
}