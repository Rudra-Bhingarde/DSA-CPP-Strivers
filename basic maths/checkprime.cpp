#include<iostream>
using namespace std;

bool isprime(int n);

int main(){
    int n;
    cout<<"enter the number you wanna check is prime or not: ";
    cin>>n;
    if(isprime(n)){
        cout<<"the given number "<<n<<" is prime.";
    }
    else{
        cout<<"the given number "<<n<<" is not prime.";
    }
    return 0;
}

bool isprime(int n){
    int counterup=2;
    if(n==2){
        return true;
    }
    while(counterup*counterup<=n){
        if(n%counterup==0){
            return false;
        }
        counterup++;
    }
    return true;
}