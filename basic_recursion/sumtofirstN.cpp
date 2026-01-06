#include<iostream>
using namespace std;

int sumtoN(int n);

int main(){
    int n;
    cout<<"enter the value of N: ";
    cin>>n;
    cout<<"the total sum till "<<n<<" using recursion is: "<<sumtoN(n)<<endl;
    cout<<"the total sum till "<<n<<" using formula is: "<<n*(n+1)/2;
    return 0;
}

int sumtoN(int n){
    if(n==0){
        return n;
    }
    int ans=0;
    ans=n+sumtoN(n-1);
    return ans;
}