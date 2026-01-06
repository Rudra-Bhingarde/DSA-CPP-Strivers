#include<iostream>
using namespace std;


int reverse(int n);

int main(){
    int n = 1234392;
    cout<<"the reverse of the given number "<<n<<" is: "<<reverse(n);
    return 0;
}

int reverse(int n){
    int ans=0;
    while(n!=0){
        ans*=10;
        ans+=n%10;
        n/=10;
    }
    return ans;
}