#include<iostream>
using namespace std;

bool ispalindrome(int n){
    int rev=0;
    int temp=n;
    while(temp!=0){
        rev*=10;
        rev+=temp%10;
        temp/=10;
    }
    if(rev==n){
        return true;
    }
    return false;
}

int main(){
    int n=12321;
    cout<<"enter a number to check if it is palindrome: ";
    cin>>n;
    cout<<"The given number "<<n<<" is ";
    if(ispalindrome(n)){
        cout<<"a palindrome";
    }
    else{
        cout<<"not a palindrome";
    }
    return 0;
}