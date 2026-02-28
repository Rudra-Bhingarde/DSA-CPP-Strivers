#include<iostream>
using namespace std;

bool iseven(int num);

int main(){
    cout<<"enter the value you want to check is even or odd: ";
    int num;
    cin>>num;
    cout<<"number is: "<<num<<endl;
    if(iseven(num)){
        cout<<"the given number is even.";
    }
    else{
        cout<<"the given number is odd.";
    }
    return 0;
}

bool iseven(int num){
    if(num%2==0){
        return true;
    }
    return false;
}