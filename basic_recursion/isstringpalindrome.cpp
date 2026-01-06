#include<iostream>
using namespace std;



bool ispalindrome(int i,string str){
    if(i>=str.size()/2) return true;
    if(str[i]!=str[str.size()-i-1]) return false;
    return ispalindrome(i+1,str);
}

int main(){
    string str;
    cout<<"enter the string: ";
    cin>>str;
    if(ispalindrome(0,str)){
        cout<<"the given string is palindrome.";
    }
    else{
        cout<<"the given string is not palindrome.";
    }
    return 0;
}