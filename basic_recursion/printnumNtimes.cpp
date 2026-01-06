#include<iostream>
using namespace std;

void printntimes(int num,int n);

int main(){
    int num;
    int n;
    cout<<"enter how many times you wanna print a number: ";
    cin>>n;
    cout<<"enter a number you wanna print "<<n<<" times using recurssion: ";
    cin>>num;
    printntimes(num,n);
    return 0;
}

void printntimes(int num,int n){
    if(n==0){
        return ;
    }
    cout<<num<<endl;
    printntimes(num,n-1);
}